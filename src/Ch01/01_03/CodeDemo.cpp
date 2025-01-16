// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // Including string header file

int main(){
    std::string str; // String

    std::cout << "Please provide your name: " << std::flush; // "Ask person for their name
    std::cin >> str; // "Character In"
    std::cout << "Hello, " << str; // "Character Out"

    std::cout << std::endl << std::endl;
    return (0);
}

// The code above is a simple program that asks the user for their name and then greets them 