#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  std::srand(std::time(0));

  int user_input = 0;
  int num1;
  int num2;
  double numerator;
  double denominator;
  while (user_input != 99)
  {
    std::cout << "C++ Calculator, get in and choose one!\n"
              << "0. Roll the dice\n"
              << "1. Add\n"
              << "2. Subtract\n"
              << "3. Multiply\n"
              << "4. Divide\n"
              << "5. Square root\n"
              << "99. Quit\n> ";
    
    std::cin >> user_input;

    if (user_input == 0)
    {
      int random_number = (std::rand() % 6) + 1;
      std::cout << "You got a" << random_number << std::endl;
    } 
    else
    {
      if (user_input == 1)
      {
        std::cout << "Enter two numbers\n";
        std::cin >> num1 >> num2;
        std::cout << "Their sum is " << (num1 + num2) << std::endl;
      }
      else
      {
        if (user_input == 2)
        {
          std::cout << "Enter two numbers\n";
          std::cin >> num1 >> num2;
          std::cout << "Their difference is " << (num1 - num2) << std::endl;
        }
        else
        {
          if (user_input == 3)
          {
            std::cout << "Enter two numbers\n";
            std::cin >> num1 >> num2;
            std::cout << "Their product is " << (num1 * num2) << std::endl;
          }
          else
          {
            if (user_input == 4)
            {
              std::cout << "Enter two numbers\n";
              std::cin >> numerator >> denominator;
              if (denominator == 0)
              {
                std::cout << "Error: Division by zero is not allowed.\n";
              }
              else
              {

              }
            }
            else
            {
              if (user_input == 5)
              {
                if (num1 < 0)
                {

                }
                else
                {

                }
              }
              else
              {
                if (user_input != 99)
                {

                }
              }
            }
          }
        }
      }
    }  
  }
  return 0;
}
