#include "Simulator.h"
#include <iostream>

int main() {
    Simulator simulator;
    int choice;
    std::string filename;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Load Program\n";
        std::cout << "2. Run Program\n";
        std::cout << "3. Execute Step-by-Step\n";
        std::cout << "4. Display Status\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter filename to load: ";
                std::cin >> filename;
                simulator.loadProgram(filename);
                break;
            case 2:
                simulator.runProgram();
                break;
            case 3:
                simulator.stepByStepExecution();
                break;
            case 4:
                simulator.displayStatus();
                break;
            case 5:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }
    }

    return 0;
}
