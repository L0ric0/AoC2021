add_executable(1
    "src/main.cpp"
    "../include/AoC2021/1/sonar.hpp" "src/sonar.cpp"
)

add_executable(AoC2021::1 ALIAS 1)

target_link_libraries(1 PRIVATE project_options
                                project_warnings)

target_include_directories(1 PUBLIC ../include)

find_package(spdlog CONFIG REQUIRED)
target_link_libraries(1 PRIVATE spdlog::spdlog)
