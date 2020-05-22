#include <iostream>
#include <sstream>
#include <string>
#include <regex>
#include <set>

// #include "utility.h"
// #include "global.h"

void Regex();
void Usage();

int main(int argc, char const *argv[])
{
    // Regex();
    // Usage();

    // int index = 10;
    // int value = 5;
    // std::stringstream outputContentValueStringStream;
    // outputContentValueStringStream << index << " " << value;
    // utility::FormatOutput(global::LogMarkTest, "Current index = %v, and value = %v", outputContentValueStringStream);

    return 0;
}

void Regex()
{
    std::string testTemplateString = "TEST: $CONTENT";
    std::string testFormatString = "This is an error: $CONTENT";
    std::string testErrorString = "test error string";

    const std::string CONTENT_EXPRESSION = "\\$CONTENT";
    std::regex contentRegex(CONTENT_EXPRESSION);

    std::string replaceErrorContent = regex_replace(testFormatString, contentRegex, testErrorString);
    std::cout << replaceErrorContent << std::endl;

    std::string replaceContent = regex_replace(testTemplateString, contentRegex, replaceErrorContent);
    std::cout << replaceContent << std::endl;
}

void TestFormatOutput(std::string & formatContent, std::stringstream &contentStringStream)
{
    std::string testTemplateString = "TEST: %v";
    const std::string REPLACE_EXPRESSION = "%v";
    std::regex replaceRegex(REPLACE_EXPRESSION);
    std::string content;
    while (contentStringStream >> content)
    {
        formatContent = regex_replace(formatContent, replaceRegex, content, std::regex_constants::format_first_only);
    }
    formatContent = std::regex_replace(testTemplateString, replaceRegex, formatContent, std::regex_constants::format_first_only);
}

void Usage()
{
    int index = 10;
    int value = 5;
    std::string ouputContentFormat = "Current index = %v, and value = %v";
    std::stringstream outputContentValueStringStream;
    outputContentValueStringStream << index << " " << value;

    TestFormatOutput(ouputContentFormat, outputContentValueStringStream);

    std::cout << "After TestFormatOutput, " << ouputContentFormat << std::endl;
}