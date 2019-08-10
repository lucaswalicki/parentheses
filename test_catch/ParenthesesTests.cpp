#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Parentheses.hpp"
#include <string>
#include <vector>


SCENARIO("Parentheses", "[Parentheses]") {
    GIVEN("Parentheses, empty input string") {
        std::vector <std::string> input{"", "()", "{}", "[]"};
        Parentheses p;

        for(auto currentCase : input){
            WHEN("isBalanced() is called") {
                auto result = p.isBalanced(currentCase);

                 THEN("The result is true") {
                    CHECK(result == true);
                }
            }
        }
    }
}
