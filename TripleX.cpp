#include <iostream>

int main()
{
  // How to add a comment!
  /*
  How to add multi line comment
  */
  std::cout << "You are a secret agent breaking into a secure server room...";
  std::cout << std::endl;
  std::cout << "You need to enter the correct codes to continue...";

  // Declare numbers
  const int a = 4;
  const int b = 3;
  const int c = 2;

  const int sum = a + b + c;
  const int product = a * b * c;

  // Print
  std::cout << std::endl;
  std::cout << sum << std::endl;
  std::cout << product << std::endl;

  return 0;
}
