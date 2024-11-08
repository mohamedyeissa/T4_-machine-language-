#include "Display.h"

void Display::showStatus(const Processor &processor) const {
    processor.displayRegisters();
}
