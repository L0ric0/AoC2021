#ifndef AOC2021_DAY1_PART2_SONAR_HPP_
#define AOC2021_DAY1_PART2_SONAR_HPP_

#include <vector>

namespace AoC2021::day1::part2
{
    class Sonar
    {
        std::vector<int> m_depts;

      public:
        Sonar(const std::vector<int>& depths);
        int calculate_depth_increases() const;
    };
} // namespace AoC2021::day1::part2

#endif
