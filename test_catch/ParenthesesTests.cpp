#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Parentheses.hpp"
#include <string>


SCENARIO("Parentheses", "[Parentheses]") {
    GIVEN("Parentheses, empty input string") {
        std::string input{};
        Parentheses p;

        WHEN("isBalanced() is called") {
            auto result = p.isBalanced(input);

            THEN("The result is true") {
                CHECK(result == true);
            }
        }
    }
}
