#ifndef PYRAMIDGEN_H
#define PYRAMIDGEN_H

#include <iostream>
#include <string>
#include <sstream>

class pyramidgen {
public:
    void getInput();
    bool promptYesNo(std::string text);
    void processCommand();

private:
    // Add private declarations here if needed
};

#endif //PYRAMIDGEN_H
