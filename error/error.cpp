#include "error.h"

error::Error::Error(error::ErrorEnum errorEnum)
{
    this->errorEnum = errorEnum;
}

error::Error::Error(error::ErrorEnum errorEnum, std::string && content)
{
    this->errorEnum = errorEnum;
    this->content = content;
}