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
    };
    return std::none_of(inputFalse.begin(),
                        inputFalse.end(),
                        [&](const auto &negative)
    {
        return s.find(negative) != std::string::npos;
    });
}
bool Parentheses::isBalancedAlgo(std::string& s)
{
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    auto it=s.begin();
    for(size_t i=0; i<=s.size(); ++i)
    {
        if(s[i]=='(' and s[i+1]==')' or s[i]=='[' and s[i+1]==']' or s[i]=='{' and s[i+1]=='}' )
            {
                s.erase(it);
                s.erase(it);
                i=-1;
                it=s.begin();
            }
        else 
            {++it;}
    }
    return s.empty();
}