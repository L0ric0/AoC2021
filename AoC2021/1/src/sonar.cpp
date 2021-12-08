#include "AoC2021/1/sonar.hpp"

#include <filesystem>
#include <fstream>
#include <spdlog/spdlog.h>
#include <string>
#include <vector>

namespace AoC2021
{
    Sonar::Sonar(const std::string& input_file)
    {
        spdlog::info("using input file: `{}`", input_file);

        int input_depth = 0;
        std::ifstream depth_stream { input_file };
        while (depth_stream >> input_depth) {
            spdlog::trace("depth found: {}", input_depth);
            m_depts.push_back(input_depth);
        }
    }

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
} // namespace AoC2021
