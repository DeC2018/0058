#include <iostream>
#include <string>

class Solution {
 public:
  int lengthOfLastWord(std::string s) {
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ')
      --i;
    const int lastIndex = i;
    while (i >= 0 && s[i] != ' ')
      --i;

    return lastIndex - i;
  }
};

int main() {
  Solution solution;

  std::string input1 = "Hello World";
  std::cout << "Input: s = \"" << input1 << "\"" << std::endl;
  std::cout << "Output: " << solution.lengthOfLastWord(input1) << std::endl;

  std::string input2 = "   fly me   to   the moon  ";
  std::cout << "Input: s = \"" << input2 << "\"" << std::endl;
  std::cout << "Output: " << solution.lengthOfLastWord(input2) << std::endl;

  std::string input3 = "luffy is still joyboy";
  std::cout << "Input: s = \"" << input3 << "\"" << std::endl;
  std::cout << "Output: " << solution.lengthOfLastWord(input3) << std::endl;

  return 0;
}
