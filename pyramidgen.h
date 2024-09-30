#ifndef PYRAMIDGEN_H
#define PYRAMIDGEN_H

#include <iostream>
#include <string>
#include <sstream>

// You can use these to enable or disable certain functionalities 
#define TITLE true 
#define USERINFO true

class pyramidgen {
public:
    void getInput();
    bool promptYesNo(std::string text);
    void processCommand();

private:
    // Add private declarations here if needed
};

#endif //PYRAMIDGEN_H
