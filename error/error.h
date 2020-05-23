#ifndef _ERROR_H_
#define _ERROR_H_

#include <string>

namespace error
{
    enum ErrorEnum
    {
        CreateDirectoryFailed,
        CreateFileFailed,
    };

    class Error
    {
    public:
        Error(ErrorEnum errorEnum);
        Error(ErrorEnum errorEnum, std::string && content);

        ErrorEnum errorEnum;
        std::string content;
    };
} // namespace error

#endif