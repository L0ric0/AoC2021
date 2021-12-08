#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TEACE
#include "AoC2021/1/sonar.hpp"
#include <spdlog/spdlog.h>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{

    if (argc != 2) {
        spdlog::critical("Wrong number of input parameters.");
        spdlog::critical("Please only provide an input file.");
        return 1;
    }

    AoC2021::Sonar sonar { argv[1] };
    int depth_increases = sonar.calculate_depth_increases();
    spdlog::info(("Number of depth increases: " + std::to_string(depth_increases)).c_str());

    return 0;
}
