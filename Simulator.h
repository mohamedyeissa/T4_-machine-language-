#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Program.h"
#include "Processor.h"
#include "Display.h"

class Simulator {
private:
    Program program;       // ﬂ«∆‰ «·»—‰«„Ã
    Processor processor;   // ﬂ«∆‰ «·„⁄«·Ã
    Display display;       // ﬂ«∆‰ «·⁄—÷

public:
    Simulator(); // Default constructor

    void loadProgram(const std::string& filename);
    void runProgram();
    void stepByStepExecution();
    void displayStatus() const;
};

#endif
