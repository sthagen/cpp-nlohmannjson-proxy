
#include <iostream>
#include <string>

#include <nlohmann/json.hpp>


int main() {
  auto j = R"(
    {
      "happy": true,
      "pi": 3.14156
    }
  )"_json;
  std::string s = j.dump();

  std::cout << "compact:  " << s << "\n";
  std::cout << "indented:\n" 
            << j.dump(4) << "\n";
  
}
