#include <iostream>
#include <string>
#include <cctype>  // for tolower

#include "main.h"

bool promptYesNo(std::string text)
{
    bool YesNO = false;
    std::string value;

    do
    {
        std::cout << text << std::endl;
        std::cout << "Enter Y for yes or N for no\n" << std::endl;
        std::cin >> value;

        // Convert to lowercase
        for (int i = 0; i < value.length(); i++)
        value[i] = tolower(value[i]);

        // Check for values
        if (value == "yes") value = "y";
        if (value == "no")  value = "n";
        if (value == "y")   YesNO = true;
        if (value == "n")   YesNO = false;

        //checks if input is = to y & n if not invalid input
        if(value != "y" && value != "n") 
        {
            std::cout << "\ninvalid input. " << std::endl;
        }
        
// Check for values
        // if (value == "y" || value == "yes") YesNO = true;
        // else if (value == "n" || value == "no") YesNO = false;
        // else
        //     std::cout << "Invalid input. Please enter Y for yes or N for no." << std::endl;
        

    } while (value != "y" && value != "n"); // loop
return YesNO;
}

//in Progres :/
class CommandHandler {
public:
    void processCommand() {
        std::string userIput;

        // keep cheking if user enters string command "userIput"
        std::cin >> userIput;

        // Check if the player entered "help"
        if (userIput == "help") {
            std::cout << "Available options:\n";
            std::cout << "1. Option 1\n";
            std::cout << "2. Option 2\n";
            std::cout << "3. Option 3\n";

            // Add more options as needed
        } else {
            std::cout << "You entered: " << userIput << std::endl;
            // Process other commands here
        }
    }
};
