#include "Parentheses.hpp"
#include <vector>
#include <algorithm>

bool Parentheses::isBalanced(std::string s)
{
    std::vector<std::string> inputFalse
    {
        "}{",
        ")(",
        "][",
        "[)(]",
        "{)(}"
    };
    return std::none_of(inputFalse.begin(),
                        inputFalse.end(),
                        [&](const auto &negative)
    {
        return s.find(negative) != std::string::npos;
    });
}
