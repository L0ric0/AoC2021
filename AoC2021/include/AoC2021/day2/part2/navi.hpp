#ifndef AOC2021_DAY2_PART2_NAVI_HPP_
#define AOC2021_DAY2_PART2_NAVI_HPP_

#include "AoC2021/day2/part2/instruction.hpp"
#include <string>
#include <utility>
#include <vector>

namespace AoC2021::day2::part2
{
    class Navi
    {
        std::vector<Instruction> m_instructions;

      public:
        Navi(const std::vector<std::pair<std::string, int>>& navi_input);
        int calculate_route() const;
    };
} // namespace AoC2021::day2::part2

#endif
