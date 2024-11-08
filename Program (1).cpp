#include "Program.h"
#include <fstream>
#include <iostream>
#include <sstream>

bool Program::loadFromFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: Unable to open file.\n";
        return false;
    }

    std::string line;
    while (getline(file, line)) {
        std::istringstream iss(line);
        std::string opcode;
        int op1, op2;
        iss >> opcode >> std::hex >> op1 >> std::hex >> op2;
        instructions.emplace_back(opcode, op1, op2);
    }

    file.close();
    return true;
}

Instruction Program::getNextInstruction() {
    if (currentInstruction < instructions.size()) {
        return instructions[currentInstruction++];
    }
    return Instruction("HALT", 0);
}

bool Program::hasMoreInstructions() const {
    return currentInstruction < instructions.size();
}
