#include <regex>
#include <iostream>
#include "utility.h"
#include "global.h"

void utility::FormatOutput(std::string logMark, std::string format, std::stringstream & contentStringStream)
{
    std::string content = logMark;
    while (contentStringStream >> content)
    {
        format = std::regex_replace(format, global::replaceRegex, content, std::regex_constants::format_first_only);
    }
    format = std::regex_replace(logMark, global::replaceRegex, format, std::regex_constants::format_first_only);
    std::cout << format << std::endl;
}

void utility::TestOutput(std::string format, std::stringstream & contentStringStream)
{
    utility::FormatOutput(global::LogMarkTest, format, contentStringStream);
}

bool utility::IsExist(std::string path)
{
    return false;
}

error::Error* utility::CreateDir(std::string directoryPath)
{
    return nullptr;
}

error::Error* utility::CreateFile(std::string filePath)
{
    return nullptr;
}

// template <typename T, template <typename TT, typename ALLOC = std::allocator<TT>> class CONT>
// std::set<T> utility::ExtraSetFromListFunction(const CONT<T> & list)
// {
//     std::set<T> newSet;
//     for (auto value : list)
//     {
//         if (newSet.find(value) == newSet.end())
//         {
//             newSet.emplace(value);
//         }
//     }
//     return newSet;
// }

std::string utility::SlicePop(std::string otherStyleString, bool capitalize)
{
    return "";
}

std::string utility::ConvertTemplate2Format(std::string templateString)
{
    return "";
}