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

TEST(ParenthesesTests, givenGoodParenthesesWhenIsBalancedIsCalledThenResultIsTrue)
{
    // GIVEN
    std::vector <std::string> input {"()","[]","{}"};
    Parentheses p;
    for (auto element:input)
    {
        // WHEN
        auto result = p.isBalanced(element);

        // THEN
        ASSERT_EQ(true,result);
    }
}

TEST(ParenthesesTests, givenSimpleUnbalancedParenthesesWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> input {")(","][","}{"};
    Parentheses p;
    for (auto element:input)
    {
        // WHEN
        auto result = p.isBalanced(element);

        // THEN
        ASSERT_EQ(false,result);
    }
}


TEST(ParenthesesTests, givenRoundUnbalancedParenthesesWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> input {"[)(]", "{)(}"};
    Parentheses p;
    for (auto element:input)
    {
        // WHEN
        auto result = p.isBalanced(element);

        // THEN
        ASSERT_EQ(false,result);
    }
}

TEST(ParenthesesTests, givenCurlyUnbalancedParanthesesWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> input {"(}{)", "[}{]"};
    Parentheses p;
    for (auto element:input)
    {
        // WHEN
        auto result = p.isBalanced(element);

        // THEN
        ASSERT_EQ(false,result);
    }
}

TEST(ParenthesesTests, givenSquareUnbalancedParanthesesWhenIsBalancedIsCalledThenResultIsFalse)
{
    // GIVEN
    std::vector <std::string> input {"{][}", "(][)"};
    Parentheses p;
    for (auto element:input)
    {
        // WHEN
        auto result = p.isBalanced(element);

        // THEN
        ASSERT_EQ(false,result);
    }
}