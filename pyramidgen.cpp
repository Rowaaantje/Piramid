#include "pyramidgen.h"

bool pyramidgen::promptYesNo(std::string text)
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

void pyramidgen::processCommand() 
{
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

// Declare the promptYesNo function so it's visible in the getInput method
// bool promptYesNo(std::string text);
void pyramidgen::getInput()
{
    int space, rows, age, minimumAge = 12, maxAge = 150;
    std::string name;
    bool isNumeric = false;
        
    if(USERINFO)
    {
        do{
            std::cout << "\nWelcome, what's your name?\n"<< std::endl;
            std::getline(std::cin, name);

            // Try to convert the input to a number
            std::istringstream iss(name);
            double number;
            if (iss >> number){
                // Input is a number
                std::cout << "Invalid Input cant enter " << name << " as a name " << std::endl;
                isNumeric = true;
            } else{
                //input is not numeric 
                isNumeric = false;
            }
        }while (isNumeric);
            std::cout << "Welcome " << name << "\n"<< std::endl;

       while (true){
        do{
            std::cout << "What's your age? You must be over " << minimumAge << " years old.\n" << std::endl;
            std::cin >> age;
            std::cin.ignore(); // Clear the input buffer
            
            if (age < maxAge){
                break;
            }
            if (age > maxAge){
                std::cout << "WAUW YOUR " << age << " YEARS OLD but i dont believe you\n" << std::endl;
            }
        }while (age > maxAge); // loop
            std::cout << "Your age " << age << "\n" << std::endl;
            
            //age check whether the user is older tha minimumAge if so you can proceed else exit program
            if (age < minimumAge){
                std::cout << "Are you sure you're " << age << " years old?" << std::endl;
                bool continueProgram = promptYesNo("");

                if (!continueProgram) { //false if input no age < than minimumage
                    std::cout << "\nLet's try again.\n" << std::endl; 
                } else if(continueProgram = true){ //true if age < minimumAge and yes exit program
                    std::cout << age << " years old is too young. Exiting the program." << std::endl;
                    exit(0);
                }
            } else{
                break; // Exit the loop if the age is acceptable
            }
        }
    }
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
    }

int main()
{
    if(TITLE)
    {
        std::cout << " _______  __   __  ______    _______  __   __  ___   ______     _______  _______  __    _ " << std::endl;
        std::cout << "|       ||  | |  ||    _ |  |   _   ||  |_|  ||   | |      |   |       ||       ||  |  | |" << std::endl;
        std::cout << "|    _  ||  |_|  ||   | ||  |  |_|  ||       ||   | |  _    |  |    ___||    ___||   |_| |" << std::endl;
        std::cout << "|   |_| ||       ||   |_||_ |       ||       ||   | | | |   |  |   | __ |   |___ |       |" << std::endl;
        std::cout << "|    ___||_     _||    __  ||       ||       ||   | | |_|   |  |   ||  ||    ___||  _    |" << std::endl;
        std::cout << "|   |      |   |  |   |  | ||   _   || ||_|| ||   | |       |  |   |_| ||   |___ | | |   |" << std::endl;
        std::cout << "|___|      |___|  |___|  |_||__| |__||_|   |_||___| |______|   |_______||_______||_|  |__|" << std::endl;
    }

    pyramidgen obj;
    obj.getInput();

    return 0;
}