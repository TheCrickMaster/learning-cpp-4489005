// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1023;
    bool flag = false;
    char lttr = 'd';

    if (a > 1023) { // Basic if-else statement 
        std::cout << "a is greater than 1023" << std::endl;
    } else {
        std::cout << "a is not greater than 1023" << std::endl;
    }

    if ((a % 2) == 0) { // Check if a is even or odd
        std::cout << "a is even" << std::endl;
    } else {
        std::cout << "a is odd" << std::endl;
    }

    if (lttr == 'd') // If only one statement, no need for curly braces
        std::cout << "Your letter is d" << std::endl;



    
    std::cout << std::endl << std::endl;
    return (0);
}
