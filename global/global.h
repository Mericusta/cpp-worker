#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#include <string>
#include <regex>

namespace global
{
    // 内部常量

    // UI 常量
    const std::string LogMarkTest = "TEST: %v";
    const std::string LogMarkNote = "Note: %v";
    const std::string LogMarkError = "Error: %v";
    const std::string LogMarkWarn = "Warn: %v";
    const std::string REPLACE_EXPRESSION = "%v";
    const std::regex replaceRegex(REPLACE_EXPRESSION);

    // 配置常量
    const std::string SyntaxGo = "go";
    const std::string SyntaxCSV = "csv";
    const std::string TemplateKeywordExpression = "TKExpression";

    // 外部常量
    const std::string ConfigProjectPathKey = "path";
    const std::string ConfigProjectSyntaxKey = "syntax";
    const std::string ConfigConvertCsvHeadKey = "csv_head";
} // namespace global

#endif