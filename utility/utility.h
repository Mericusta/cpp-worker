#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <string>
#include <sstream>
#include <fstream>
#include <exception>
#include <vector>
#include <set>
#include "error.h"

namespace utility {
    void FormatOutput(std::string logMark, std::string format, std::stringstream & contentStringStream);
    void TestOutput(std::string format, std::stringstream & contentStringStream);
    bool IsExist(std::string path);
    error::Error* CreateDir(std::string directoryPath);
    error::Error* CreateFile(std::string filePath);

    // NOTE: C++ 11 函数不支持模板的模板参数，改用仿函数+模板的模板参数形式，C++14/17/20 尝试
    template <typename T, template <typename T, typename ALLOC = std::allocator<T>> class CONT = std::vector>
    class ExtraSetFromList
    {
        public:
            std::set<T> operator () (const CONT<T> & list)
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
    };

    // NOTE: C++ 17 函数支持模板的模板参数，但是无法分离定义，而且无法推到模板的模板实参类型，需要显式指定
    template <typename T, template <typename T, typename ALLOC = std::allocator<T>> class CONT = std::vector>
    std::set<T> ExtraSetFromListFunction(const CONT<T> & list)
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
    
    std::string SlicePop(std::string otherStyleString, bool capitalize);
    std::string ConvertTemplate2Format(std::string templateString);
}

#endif