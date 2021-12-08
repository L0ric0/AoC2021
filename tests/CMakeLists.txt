set(BINARY tests)

add_executable(${BINARY} EXCLUDE_FROM_ALL
    "src/1.cpp"
    "../AoC2021/include/Aoc2021/1/sonar.hpp" "../AoC2021/1/src/sonar.cpp"
)

target_include_directories(${BINARY} PRIVATE include)
target_include_directories(${BINARY} PRIVATE ../AoC2021/include)

target_link_libraries(${BINARY} PRIVATE project_warnings project_options)

find_package(spdlog CONFIG REQUIRED)
target_link_libraries(${BINARY} PRIVATE spdlog::spdlog)

find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(${BINARY} PRIVATE Catch2::Catch2)

catch_discover_tests(${BINARY})

if (COVERAGE)
        append_coverage_compiler_flags()
        setup_target_for_coverage_gcovr_html(
            NAME ${CMAKE_PROJECT_NAME}_coverage
            EXECUTABLE ctest -j ${PROCESSOR_COUNT}
            DEPENDENCIES ${BINARY}
            EXCLUDE ${PROJECT_SOURCE_DIR}/tests
        )
endif()
