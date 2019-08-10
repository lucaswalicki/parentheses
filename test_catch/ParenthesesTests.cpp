#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Parentheses.hpp"
#include <string>
#include <vector>


SCENARIO("Parentheses", "[Parentheses]") {
    GIVEN("Parentheses, basic positive cases") {
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

    GIVEN("Parentheses, basic negative cases") {
        std::vector <std::string> input{")(", "}{", "]["};
        Parentheses p;

        for(auto currentCase : input){
            WHEN("isBalanced() is called") {
                auto result = p.isBalanced(currentCase);

                THEN("The result is true") {
                    CHECK(result == false);
                }
            }
        }
    }

    GIVEN("Parentheses, mixed types positive") {
        std::vector <std::string> input{"()[]", "{}[]", "{}()"};
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

    GIVEN("Parentheses, mixed types negative") {
        std::vector <std::string> input{"()][", "}{[]", "(}"};
        Parentheses p;

        for(auto currentCase : input){
            WHEN("isBalanced() is called") {
                auto result = p.isBalanced(currentCase);

                THEN("The result is true") {
                    CHECK(result == false);
                }
            }
        }
    }
}
