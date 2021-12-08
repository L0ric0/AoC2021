#include "AoC2021/day1/part1/sonar.hpp"

#include <spdlog/spdlog.h>
#include <vector>

namespace AoC2021::day1::part1
{

    Sonar::Sonar(const std::vector<int>& depths) : m_depts(depths) {}

    int Sonar::calculate_depth_increases() const
    {
        bool first_depth = true;
        int prev_depth = 0;
        int depth_increases = 0;
        for (const auto& cur_depth : m_depts) {
            if (first_depth) {
                first_depth = false;
            } else if (prev_depth < cur_depth) {
                depth_increases++;
            }
            prev_depth = cur_depth;
        }
        return depth_increases;
    }
} // namespace AoC2021::day1::part1
