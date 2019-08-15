#include <gtest/gtest.h>
#include "Parentheses.hpp"


TEST(ParenthesesTests, givenEmptyStringWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::string input{};
    Parentheses p;

    // WHEN
     auto result = p.isBalanced(input);

    // THEN
    ASSERT_TRUE(result);
}

TEST(ParenthesesTests, givenParenthesesWhenIsBalancedAlgoIsCalledThenResultIsTrue)
{
    //GIVEN
    std::string input {"()(())()"};
    Parentheses p;

    //WHEN
    auto result = p.isBalancedAlgo(input);

    //THEN
    ASSERT_TRUE(result);
}