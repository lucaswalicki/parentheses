#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Parentheses.hpp"
#include <string>
#include <vector>

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
   GIVEN("Parentheses, () input string") {
       std::string input{"()"};
       Parentheses p;

       WHEN("isBalanced() is called") {
           auto result = p.isBalanced(input);

           THEN("The result is true") {
               CHECK(result == true);
           }
       }
   }

   GIVEN("Parentheses, [] input string") {
       std::string input{"[]"};
       Parentheses p;

       WHEN("isBalanced() is called") {
           auto result = p.isBalanced(input);

           THEN("The result is true") {
               CHECK(result == true);
           }
       }
   }
   GIVEN("Parentheses, {} input string") {
       std::string input{"{}"};
       Parentheses p;

       WHEN("isBalanced() is called") {
           auto result = p.isBalanced(input);

           THEN("The result is true") {
               CHECK(result == true);
           }
       }
   }
   GIVEN("Parentheses, {} input string")
   {
       std::vector <std::string> input {"()","[]","{}"};
       Parentheses p;
       for (auto element:input)
       {
           WHEN("isBalanced() is called")
           {
              auto result = p.isBalanced(element);

               THEN("The result is true")
               {
                   CHECK(result == true);
               }
           }
       }
   }
}


