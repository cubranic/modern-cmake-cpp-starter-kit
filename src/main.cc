// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "calc.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: " << argv[0] << " op number\n";
        std::cout << "       OP: sqrt|log|log2|ln\n";
        return 1;
    }

    // convert input to double
    const double inputValue = std::stod(argv[2]);

    const std::string op = argv[1];

    if (op == "sqrt") {
        // calculate square root
        const double outputValue = calc_sqrt(inputValue);
        std::cout << "The square root of " 
            << inputValue << " is " 
            << outputValue
            << std::endl;
    }
    else if (op == "log") {
        // calculate square root
        const double outputValue = calc_log(inputValue);
        std::cout << "The log (base 10) of " 
            << inputValue << " is " 
            << outputValue
            << std::endl;
    }
    else if (op == "log2") {
        // calculate square root
        const double outputValue = calc_log2(inputValue);
        std::cout << "The log (base 2) of " 
            << inputValue << " is " 
            << outputValue
            << std::endl;
    }
    else if (op == "ln") {
        // calculate square root
        const double outputValue = calc_ln(inputValue);
        std::cout << "The natural log of " 
            << inputValue << " is " 
            << outputValue
            << std::endl;
    }
    else {
        std::cout << "Unknown operation: " << op << "\n";
    }
    return 0;
}