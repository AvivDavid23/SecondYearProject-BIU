

#ifndef PROJECT_PRINTCOMMAND_H
#define PROJECT_PRINTCOMMAND_H

#include <iostream>
#include "Command.h"
#include "map"

/**
 * Command which prints something to the stdout
 */
class PrintCommand : public Command {
    string output;
    map<string, double> &smblTablePtr;
    unsigned int &index;

public:
    PrintCommand(map<string, double> &smblTablePtr, unsigned int &index);

    int execute(const vector<string> &words, unsigned int i);
};


#endif //PROJECT_PRINTCOMMAND_H
