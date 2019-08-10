#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s) {
    return not(s[0]==')' or s[0]=='}' or s[0]==']');

}
