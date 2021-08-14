#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
  std::cout << "  ▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄ \n";
  std::cout << " ▐░░░░░░░░░▌ ▐░░░░░░░░░░▌ ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌\n";
  std::cout << "▐░█░█▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀ ▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌\n";
  std::cout << "▐░▌▐░▌    ▐░▌▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌          ▐░▌\n";
  std::cout << "▐░▌ ▐░▌   ▐░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌          ▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌\n";
  std::cout << "▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░▌ ▐░░░░░░░░░░░▌▐░▌          ▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌\n";
  std::cout << "▐░▌   ▐░▌ ▐░▌▐░█▀▀▀▀▀▀▀█░▌ ▀▀▀▀▀▀▀▀▀█░▌▐░▌          ▐░▌       ▐░▌▐░█▀▀▀▀█░█▀▀ ▐░█▀▀▀▀▀▀▀▀▀ ▐░▌\n";
  std::cout << "▐░▌    ▐░▌▐░▌▐░▌       ▐░▌          ▐░▌▐░▌          ▐░▌       ▐░▌▐░▌     ▐░▌  ▐░▌           ▀ \n";
  std::cout << "▐░█▄▄▄▄▄█░█░▌▐░█▄▄▄▄▄▄▄█░▌ ▄▄▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌      ▐░▌ ▐░█▄▄▄▄▄▄▄▄▄  ▄ \n";
  std::cout << " ▐░░░░░░░░░▌ ▐░░░░░░░░░░▌ ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░▌\n";
  std::cout << "  ▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀ \n\n";
  std::cout << "You are a secret agent breaking into a level " << Difficulty;
  std::cout << " secure server room...\nYou need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);

  // How to add a comment!
  /*
  How to add multi line comment
  */


  // Declare numbers
  const int CodeA = rand() % Difficulty + Difficulty;
  const int CodeB = rand() % Difficulty + Difficulty;
  const int CodeC = rand() % Difficulty + Difficulty;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  // Print
  std::cout << "There are 3 numbers in the code\n";
  std::cout << "\nThe codes add-up to: " << CodeSum;
  std::cout << "\nThe codes multiply to give: " << CodeProduct << "\n";
  std::cout << "Do you have only 3 chances!\n";

  // Store player guess
  int GuessA, GuessB, GuessC;
  std::cout << "1 Guess: ";
  std::cin >> GuessA;
  std::cout << "2 Guess: ";
  std::cin >> GuessB;
  std::cout << "3 Guess: ";
  std::cin >> GuessC;

  int GuessSum  = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  // if statement
  if (GuessSum == CodeSum && GuessProduct == GuessProduct)
  {
    if (Difficulty <= 4)
    {
    std::cout << "\nYou win! Go to next Level!\n\n";
    }
    return true;
  }
  else
  {
    std::cout << "\nHahahahaha, Try again! LOSER!\n\n";
    return false;
  }
}

int main()
{
  srand(time(NULL));
  
  int LevelDifficulty = 1;

  const int MaxLevel = 5;

  while (LevelDifficulty <= MaxLevel) // Loop the game until all levels
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    // Clear any typo
    std::cin.clear();
    // Discards the buffer
    std::cin.ignore();

    if (bLevelComplete)
    {
      ++LevelDifficulty;
    }

  }
  std::cout << "\n\nBastard you are free!\n";
  return 0;
}
