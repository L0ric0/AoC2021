#ifndef AOC2021_1_SONAR_HPP_
#define AOC2021_1_SONAR_HPP_

#include <string>
#include <vector>

namespace AoC2021
{
    class Sonar
    {
        std::vector<int> m_depts;

      public:
        Sonar(const std::string& input_file);
        Sonar(const std::vector<int>& depths);
        int calculate_depth_increases() const;
    };
} // namespace AoC2021

#endif
