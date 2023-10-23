#include <iostream>
#include <string>

#include "main.h"

// Declare the promptYesNo function so it's visible in the getInput method
// bool promptYesNo(std::string text);


class Input
{
public:
    void getInput()
    {
        int space, rows, age, minimumAge = 12, maxAge = 150;;
        std::string name;
        

#pragma region Title
        std::cout << "      _                   _    _                  " << std::endl;
        std::cout << " ___ |_| ___  ___  _____ |_| _| |   ___  ___  ___ " << std::endl;
        std::cout << "| . || ||  _|| .'||     || || . |  | . || -_||   |" << std::endl;
        std::cout << "|  _||_||_|  |__,||_|_|_||_||___|  |_  ||___||_|_|" << std::endl;
        std::cout << "|_|                                |___|          " << std::endl;
#pragma endregion
#pragma region userInfo
        std::cout << "\nWelcome, what's your name?\n"<< std::endl;
        std::cin >> name;
        std::cout << "Welcome " << name << "\n"<< std::endl;

       while (true) {
        // std::cout << "What's your age? You must be over " << minimumAge << " years old." << std::endl; working code temp
        // std::cin >> age;
        // std::cin.ignore(); // Clear the input buffer
        // std::cout << "Your age " << age << "\n" << std::endl;

        do{
            std::cout << "What's your age? You must be over " << minimumAge << " years old." << std::endl;
            std::cin >> age;
            std::cin.ignore(); // Clear the input buffer
            
            if (age < maxAge){//age >= ageCheck ||
                break;
            }
            if (age > maxAge){
                std::cout << "\ni dont know if i believe that your " << age << " years old try again\n" << std::endl;
            }
        }while (age > maxAge); // loop
        
        std::cout << "Your age " << age << "\n" << std::endl;
            
            //age check whether the user is older tha minimumAge if so you can proceed else exit program
            if (age < minimumAge){
                std::cout << "Are you sure you're " << age << " years old?" << std::endl;
                bool continueProgram = promptYesNo("");

                if (!continueProgram) { //false  if input no age < than minimumage
                    std::cout << "\nLet's try again.\n" << std::endl; 
                } else if(continueProgram = true){ //true if age < minimumAge and yes exit program
                    std::cout << age << " years old is too young. Exiting the program." << std::endl;
                    exit(0);
                }
            } else{
                break; // Exit the loop if the age is acceptable
            }
        }
#pragma endregion
#pragma region Piramid
        std::cout << "Enter Number of rows" << std::endl;
        std::cin >> rows;

        for (int i = 1, k = 0; i <= rows; ++i, k = 0)
        {
            for (space = 1; space <= rows - i; ++space)
            {
                std::cout << "  ";
            }

            while (k != 2 * i - 1)
            {
                std::cout << "* ";
                ++k;
            }
            std::cout << std::endl;
        }
        #pragma endregion
    }
};

//yesno

int main()
{
    Input input;
    input.getInput();
    return 0;
}