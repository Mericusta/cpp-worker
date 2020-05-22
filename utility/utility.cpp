#include <regex>
#include <iostream>
#include "utility.h"
#include "global/global.h"

void FormatOutput(std::string logMark, std::string format, std::stringstream & contentStringStream)
{
    std::string content;
    while (contentStringStream >> content)
    {
        format = std::regex_replace(format, global::replaceRegex, content, std::regex_constants::format_first_only);
    }
    format = std::regex_replace(logMark, global::replaceRegex, format, std::regex_constants::format_first_only);
    std::cout << format << std::endl;
}

void TestOutput(std::string format, std::stringstream content)
{

}

bool IsExist(std::string path)
{

}

std::exception CreateDir(std::string directoryPath)
{

}

std::exception CreateFile(std::string filePath)
{

}

template <typename T, template <typename T, typename ALLOC = std::allocator<T>> class CONT>
std::set<T> utility::ExtraSetFromList<T, CONT>::operator () (const CONT<T> & list)
{
    std::set<T> newSet;
    for (auto value : list)
    {
        if (newSet.find(value) == newSet.end())
        {
            newSet.emplace(value);
        }
    }
    return newSet;
}

std::string SlicePop(std::string otherStyleString, bool capitalize)
{

}

std::string ConvertTemplate2Format(std::string templateString)
{

}