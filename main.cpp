#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <array>
#include <string>
#include <sstream>

#include <doctest/doctest.h>

#include <nlohmann/json.hpp>


TEST_SUITE ("Example derived tests.") {
    TEST_CASE ("No error in parsing the JSON fixture with round trip.") {
        /* Example snippet:
         *
         * auto j = R"(
         *   {
         *     "happy": true,
         *     "pi": 3.14156
         *   }
         * )"_json;
         * std::string s = j.dump();
         * std::cout << "compact:  " << s << "\n";
         * std::cout << "indented:\n" 
         *           << j.dump(4) << "\n";
         */
        auto j = R"(
          {
            "happy": true,
            "pi": 3.14156
          }
        )"_json;
        SUBCASE("The JSON representation is not empty in round trip.") {
            std::string s = j.dump();
            REQUIRE(!s.empty());
        }
        SUBCASE("The indentation on dump works in round trip.") {
            std::string si = j.dump(42);
            REQUIRE(si.find("                                          ") != std::string::npos);
        }
    }
}
