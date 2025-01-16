// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> // "#include" is a preprocessor directive that tells the compiler to include the contents of the iostream file in the program
#include <string> // "#include" is a preprocessor directive that tells the compiler to include the contents of the string file in the program
#include <cstdint> // "#include" is a preprocessor directive that tells the compiler to include the contents of the cstdint file in the program
#define CAPACTIY 5000 // "#define" is a preprocessor directive that defines a constant value that can be used throughout the program as a macro
#define DEBUG // "#define" is a preprocessor directive that defines a macro named "DEBUG"

int main(){
    int32_t large = CAPACTIY; // "int32_t" is a type definition that defines a 32-bit integer, "large" is a variable that stores the value of the constant "CAPACTIY"
    uint8_t small = 37; // "uint8_t" is a type definition that defines an 8-bit unsigned integer, "small" is a variable that stores the value 37
    large += small; // "+=" is an operator that adds the value of the variable "small" to the variable "large"
#ifdef DEBUG // "#ifdef" is a preprocessor directive that checks if the macro "DEBUG" is defined
    std::cout << "[About to do the addition]" << std::endl;
#endif // "#endif" is a preprocessor directive that ends the conditional compilation block

    std::cout << "The value of large is: " << large << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
