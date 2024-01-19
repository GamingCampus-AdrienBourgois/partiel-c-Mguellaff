#include "Solution2.h"
#include <fstream>
#include <sstream>
#include <ostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    std::string filePath = "BankAccount/" + accountName + ".txt";
    std::ifstream file(filePath);

    if (!file.is_open()) {
        throw std::runtime_error("File not found");
    }

    float balance = 0.0f;
    char operation;
    float amount;

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);

        if (!(iss >> operation >> amount)) {
            throw std::runtime_error("Error reading file");
        }

        switch (operation) {
        case '+':
            balance += amount;
            break;
        case '-':
            balance -= amount;
            break;
        default:
            throw std::runtime_error("Invalid operation in file");
        }
    }
    file.close();
    return balance;
}

#endif