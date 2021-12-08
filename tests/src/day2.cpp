#include "AoC2021/day2/part1/navi.hpp"
#include "AoC2021/day2/part2/navi.hpp"
#include "catch2/catch.hpp"
#include "day2.res.hpp"

TEST_CASE("AoC Day 2 Part 1 Navi", "AoC")
{
    SECTION("small navi data")
    {
        AoC2021::day2::part1::Navi navi { AoC2021::tests::day2::small_navi_data };
        REQUIRE(navi.calculate_route() == 150);
    }
    SECTION("large navi data")
    {
        AoC2021::day2::part1::Navi navi { AoC2021::tests::day2::navi_data };
        REQUIRE(navi.calculate_route() == 2322630);
    }
}

TEST_CASE("AoC Day 2 Part 2 Navi", "AoC")
{
    SECTION("small navi data")
    {
        AoC2021::day2::part2::Navi navi { AoC2021::tests::day2::small_navi_data };
        REQUIRE(navi.calculate_route() == 900);
    }
    SECTION("large navi data")
    {
        AoC2021::day2::part2::Navi navi { AoC2021::tests::day2::navi_data };
        REQUIRE(navi.calculate_route() == 2105273490);
    }
}
