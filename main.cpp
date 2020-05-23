#include <iostream>
#include <sstream>
#include <string>
#include <regex>
#include <vector>

#include "utility.h"
#include "global.h"

int main(int argc, char const *argv[])
{
    std::cout << "utility::TestOutput" << std::endl;
    int index = 10;
    int value = 5;
    std::stringstream outputContentValueStringStream;
    outputContentValueStringStream << index << " " << value;
    utility::TestOutput("Current index = %v, and value = %v", outputContentValueStringStream);

    std::cout << "utility::ExtraSetFromList" << std::endl;
    auto newSet = utility::ExtraSetFromList<int, std::vector>()({1, 1, 2, 2, 3, 3});
    for (auto v : newSet)
    {
        std::cout << v << std::endl;
    }

    std::cout << "utility::ExtraSetFromListFunction" << std::endl;
    auto anotherNewSet = utility::ExtraSetFromListFunction<int>({1, 1, 2, 2, 3, 3});
    for (auto v : anotherNewSet)
    {
        std::cout << v << std::endl;
    }    

    return 0;
}
