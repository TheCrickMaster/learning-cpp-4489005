// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    // Example 1: Going from int to float
    int fahrenheit = 100;
    int celsius;

    celsius = (5 / 9) * (fahrenheit - 32); // This will not work as expected since this is a constant expession

    celsius = ((float) 5 / (float) 9) * (fahrenheit - 32); // This will work as expected since we are casting the division to float

    std::cout << "Degrees in Celsius: " << celsius << std::endl;

    // Example 2: Casting float to int and fractional part
    float weight = 10.99;
    std::cout << "Float :" << weight << std::endl;
    std::cout << "Integer Part :" << (int) weight << std::endl;
    std::cout << "Fractional Part :" << (weight - (int) weight * 10000) << std::endl; // Example of floating point approximation

    std::cout << std::endl << std::endl;
    return (0);
}
