#include <iostream>

int main()
{
  // How to add a comment!
  /*
  How to add multi line comment
  */
  std::cout << "You are a secret agent breaking into a secure server room...";
  std::cout << std::endl;
  std::cout << "You need to enter the correct codes to continue..." << std::endl;

  // Declare numbers
  const int CodeA = 4;
  const int CodeB = 3;
  const int CodeC = 2;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print
  std::cout << std::endl;
  std::cout << "There are 3 numbers in the code" << std::endl;
  std::cout << "The codes add-up to: " << CodeSum << std::endl;
  std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  int GuessSum  = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  return 0;
}
