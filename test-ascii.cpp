#include <iostream>
#include <string>

void testascii(std::string s) {
  for (int i = 0;i < s.size();i++) {
    std::cout << s[i] << " " << (int)s[i] << std::endl;
  }
  std::cout << std::endl;
}

int main() {
  std::cout << "Running test for testascii(std::string):\n\n";
  std::cout << "testascii('Cat :3 Dog'):\n";
  testascii("Cat :3 Dog");
  std::cout << "testascii('Hello, World!'):\n";
  testascii("Hello, World!");
  std::cout << std::endl;
  return 0;
}
