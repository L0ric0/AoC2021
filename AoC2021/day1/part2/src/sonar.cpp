#include "AoC2021/day1/part2/sonar.hpp"

#include <numeric>
#include <spdlog/spdlog.h>
#include <vector>

namespace AoC2021::day1::part2
{

    Sonar::Sonar(const std::vector<int>& depths) : m_depts(depths) {}

    int Sonar::calculate_depth_increases() const
    {
        int prev_sum_depth = std::accumulate(m_depts.begin(), m_depts.begin() + 3, 0);
        int depth_increases = 0;
        for (auto it = m_depts.begin() + 3; it != m_depts.end(); it++) {
            // go until (it + 1) as accumulate does not use the last iterator
            int cur_sum_depth = std::accumulate(it - 2, it + 1, 0);
            if (cur_sum_depth > prev_sum_depth) {
                depth_increases++;
            }
            prev_sum_depth = cur_sum_depth;
        }
        return depth_increases;
    }
} // namespace AoC2021::day1::part2
