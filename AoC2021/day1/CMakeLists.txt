set(DAY 1)

add_executable(day${DAY}_part1
    "part1/src/main.cpp"
    "part1/src/sonar.cpp"
)

add_executable(day${DAY}_part2
    "part2/src/main.cpp"
    "part2/src/sonar.cpp"
 )

add_executable(AoC2021::day${DAY}_part1 ALIAS day${DAY}_part1)
add_executable(AoC2021::day${DAY}_part2 ALIAS day${DAY}_part2)

foreach(PART "part1" "part2")
    target_link_libraries(day${DAY}_${PART} PRIVATE project_options
                                             project_warnings)
    
    target_include_directories(day${DAY}_${PART} PUBLIC ../include)
    target_include_directories(day${DAY}_${PART} PUBLIC ../../resources/)
    
    find_package(spdlog CONFIG REQUIRED)
    target_link_libraries(day${DAY}_${PART} PRIVATE spdlog::spdlog)
endforeach()
