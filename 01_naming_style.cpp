#include <iostream>
#include <string>

int main() {
  // small camel: variables/functions in many C++ codebases
  std::string userName = "Alice";
  auto getUserInfo = [](const std::string& name) {
    return std::string("User: ") + name;
  };

  // big camel (PascalCase): class/type names
  struct UserProfile {
    std::string displayName;
  };
  UserProfile profile{userName};

  // small snake: common in C-style code or some APIs
  int user_id = 42;
  auto get_user_info = [](int id) {
    return std::string("UserId: ") + std::to_string(id);
  };

  // big snake: constants/macros
  const int MAX_BUFFER_SIZE = 1024;
  const float PI = 3.14;
  const float GRAVITY_VALUE = 9.8;
  const char* API_KEY = "DEMO_KEY";

  std::cout << getUserInfo(userName) << "\n";
  std::cout << "Display: " << profile.displayName << "\n";
  std::cout << get_user_info(user_id) << "\n";
  std::cout << "MAX_BUFFER_SIZE=" << MAX_BUFFER_SIZE << ", API_KEY=" << API_KEY
            << "\n";

  return 0;
}
