#include "AoC2021/day2/part1/navi.hpp"

#include "AoC2021/day2/part1/instruction.hpp"
#include <string>
#include <utility>
#include <vector>

namespace AoC2021::day2::part1
{
    Navi::Navi(const std::vector<std::pair<std::string, int>>& navi_input)
    {
        m_instructions.reserve(navi_input.size());
        for (const auto& elem : navi_input) {
            m_instructions.push_back(Instruction { elem });
        }
    }

    int Navi::calculate_route() const
    {
        int depth = 0;
        int forward = 0;
        for (const auto& elem : m_instructions) {
            switch (elem.m_direction) {
            case Direction::Forward:
                forward += elem.m_value;
                break;
            case Direction::Up:
                depth -= elem.m_value;
                break;
            case Direction::Down:
                depth += elem.m_value;
                break;
            }
        }
        return forward * depth;
    }
} // namespace AoC2021::day2::part1
