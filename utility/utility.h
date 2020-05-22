#include <string>
#include <sstream>
#include <fstream>
#include <exception>
#include <vector>
#include <set>

namespace utility {
    void FormatOutput(std::string logMark, std::string format, std::stringstream & contentStringStream);
    void TestOutput(std::string format, std::stringstream content);
    bool IsExist(std::string path);
    std::exception CreateDir(std::string directoryPath);
    std::exception CreateFile(std::string filePath);

    // TODO: C++ 11 函数不支持模板的模板参数，改用仿函数+模板的模板参数形式，C++14/17/20 尝试
    // template <typename T, template <typename T> class CONT = std::vector>
    // std::set<T> ExtractSetFromList(CONT<T> list);

    template <typename T, template <typename T, typename ALLOC = std::allocator<T>> class CONT = std::vector>
    class ExtraSetFromList
    {
        public:
            std::set<T> operator () (const CONT<T> & list);
    };
    
    std::string SlicePop(std::string otherStyleString, bool capitalize);
    std::string ConvertTemplate2Format(std::string templateString);
}