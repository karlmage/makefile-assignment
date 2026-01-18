#include "calculator.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0]
                  << " <add|sub|mul> <a> <b>\n";
        return 1;
    }

    std::string cmd = argv[1];
    double a = std::stod(argv[2]);
    double b = std::stod(argv[3]);

    Calculator calc;
    double result = 0.0;

    if (cmd == "add") {
        result = calc.Add(a, b);
    } else if (cmd == "sub") {
        result = calc.Sub(a, b);
    } else if (cmd == "mul") {
        result = calc.Mul(a, b);
    } else {
        std::cerr << "Unknown command: " << cmd << "\n";
        return 1;
    }

    std::cout << result << std::endl;
    return 0;
}