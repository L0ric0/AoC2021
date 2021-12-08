#include "AoC2021/day1/part1/sonar.hpp"
#include "day1.res.hpp"
#include <spdlog/spdlog.h>

int main()
{

    AoC2021::day1::part1::Sonar sonar { AoC2021::tests::day1::sonar_data };
    int depth_increases = sonar.calculate_depth_increases();
    spdlog::info(("Number of depth increases: " + std::to_string(depth_increases)).c_str());

    return 0;
}
