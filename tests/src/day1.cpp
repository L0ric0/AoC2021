#define CATCH_CONFIG_MAIN
#include "AoC2021/day1/part1/sonar.hpp"
#include "AoC2021/day1/part2/sonar.hpp"
#include "catch2/catch.hpp"
#include "day1.res.hpp"

TEST_CASE("AoC Day 1 Part 1 Sonar", "AoC")
{
    SECTION("small sonar data")
    {
        AoC2021::day1::part1::Sonar sonar { AoC2021::tests::day1::small_sonar_data };
        REQUIRE(sonar.calculate_depth_increases() == 7);
    }
    SECTION("large sonar data")
    {
        AoC2021::day1::part1::Sonar sonar { AoC2021::tests::day1::sonar_data };
        REQUIRE(sonar.calculate_depth_increases() == 1448);
    }
}

TEST_CASE("AoC Day 1 Part 2 Sonar", "AoC")
{
    SECTION("small sonar data")
    {
        AoC2021::day1::part2::Sonar sonar { AoC2021::tests::day1::small_sonar_data };
        REQUIRE(sonar.calculate_depth_increases() == 5);
    }
    SECTION("large sonar data")
    {
        AoC2021::day1::part2::Sonar sonar { AoC2021::tests::day1::sonar_data };
        REQUIRE(sonar.calculate_depth_increases() == 1471);
    }
}
