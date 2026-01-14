#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Demo: syntax highlight + autocomplete + error hints + Ctrl+F.
// Try searching for: FIND_ME

struct User {
  std::string name;
  int score = 0;

  std::string Greeting() const {
    return "Hello, " + name + "!";
  }
};

std::vector<int> FilterEven(const std::vector<int>& values) {
  std::vector<int> out;
  for (int v : values) {
    if (v % 2 == 0) {
      out.push_back(v);
    }
  }
  return out;
}

int main() {
  // Autocomplete target examples: std::string methods, vector methods.
  std::string text = "Find me in the editor: FIND_ME FIND_ME";
  text += " (append demo)";
  std::cout << text << "\n";

  User user{"Ava", 95};
  std::cout << user.Greeting() << " score=" << user.score << "\n";

  std::vector<int> nums{1, 2, 3, 4, 5, 6};
  auto evens = FilterEven(nums);
  std::sort(evens.begin(), evens.end());
  std::cout << "Even count=" << evens.size() << "\n";

  // Error hint demo: uncomment to see diagnostics.
//   int broken = "123";            // type mismatch
//   std::cout << missing << "\n";  // undeclared identifier

  // Ctrl+F demo keywords.
  const char* findMe = "FIND_ME is repeated here for search: FIND_ME";
  std::cout << findMe << "\n";

  return 0;
}
