#include "Instruction.h"

Instruction::Instruction(std::string op, int op1, int op2)
    : opcode(op), operand1(op1), operand2(op2) {}

bool Instruction::validate() {
    return !opcode.empty();
}
