#define CATCH_CONFIG_MAIN
#include "1_recources.hpp"
#include "AoC2021/1/sonar.hpp"
#include "catch2/catch.hpp"

TEST_CASE("AoC Day 1 Part 1 Sonar", "AoC")
{
    AoC2021::Sonar sonar { AoC2021::tests::day1_part1 ::sonar_data };
    REQUIRE(sonar.calculate_depth_increases() == 1448);
}
