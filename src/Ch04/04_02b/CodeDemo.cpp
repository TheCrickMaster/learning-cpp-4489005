// Learning C++ 
// Exercise 04_02
// Switch Statements, by Eduardo Corpeño 

// These statements are used to drive the flow of the program based on the value of a variable or expression

#include <iostream>

int main(){
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter operand 1: " << std::flush;
    std::cin >> operand_1;
    std::cout << "Enter operand 2: " << std::flush;
    std::cin >> operand_2;
    std::cout << "Choose operation [ + - * / ]: " << std::flush;
    std::cin >> operation;

    // switch goes here
    switch(operation) { // Basic switch statement based on what the user entered
        case '+':
            result = operand_1 + operand_2;
            break;
        case '-':
            result = operand_1 - operand_2;
            break;
        case '*':
            result = operand_1 * operand_2;
            break;
        case '/':
            if (operand_2 == 0) {
                std::cout << "Division by zero is not allowed" << std::endl;
                return (1); // Returns 1 to indicate an error
            }
            result = operand_1 / operand_2;
            break;
        default: // dentifies the default case, which is executed if none of the other cases match
            std::cout << "Invalid operation" << std::endl;
            return (1);
    }

    std::cout << "The result is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
