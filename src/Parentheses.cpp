#include <map>
#include "Parentheses.hpp"



bool Parentheses::isBalanced(std::string s) {
    if (s[0] == ')' or s[0] == '}' or s[0] == ']')
        return false;

    std::map<char, int> charCounter = {
            {'(', 0},
            {')', 0},
            {'{', 0},
            {'}', 0},
            {'[', 0},
            {']', 0}
    };

    for (auto letter : s) {
        if (charCounter.find(letter) != charCounter.end()) {
            charCounter[letter] += 1;

            if (charCounter['{'] < charCounter['}'])
                return false;
            if (charCounter['['] < charCounter[']'])
                return false;
            if (charCounter['('] < charCounter[')'])
                return false;
        }
    }


    return true;
}