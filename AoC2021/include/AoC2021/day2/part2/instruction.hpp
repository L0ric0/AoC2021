#ifndef AOC2021_DAY2_PART2_INSTRUCTION_HPP_
#define AOC2021_DAY2_PART2_INSTRUCTION_HPP_

#include <string>
#include <unordered_map>
#include <utility>

namespace AoC2021::day2::part2
{
    enum class Direction {
        Forward,
        Up,
        Down,
    };

    static const std::unordered_map<std::string, Direction> string_direction_map = {
        { "forward", Direction::Forward },
        { "up", Direction::Up },
        { "down", Direction::Down },
    };

    struct Instruction {
        Direction m_direction = Direction::Forward;
        int m_value = 0;

        Instruction(const std::pair<std::string, int>& value)
            : m_direction { string_direction_map.at(value.first) },
              m_value { value.second }
        {
        }
    };
} // namespace AoC2021::day2::part2

#endif
