#include "AoC2021/day2/part1/navi.hpp"
#include "day2.res.hpp"
#include <spdlog/spdlog.h>

int main()
{
    AoC2021::day2::part1::Navi navi { AoC2021::tests::day2::small_navi_data };
    spdlog::info("Navigation result: {}", navi.calculate_route());

    return 0;
}
