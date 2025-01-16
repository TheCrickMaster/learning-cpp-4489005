// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring> // for c-style string functions

int main(){
    const size_t LENGTH1 = 30;
    char array_str1[LENGTH1] = "Hey Guys! "; // Using Character Arrays
    char array_str2[] = "Whats Up?";

    std::string std_str1 = "Hi Everybody! "; // Using C++ Strings with class string
    std::string std_str2 = "How are you?";

    strncat(array_str1, array_str2, LENGTH1); // Concatenating two character arrays
    std::cout << array_str1 << std::endl;

    std::cout << std_str1 + std_str2 << std::endl; // Concatenating two C++ strings
    
    std::cout << std::endl << std::endl;
    return (0);
}
