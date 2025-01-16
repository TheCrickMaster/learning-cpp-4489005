// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

// #define AGE_LENGTH 4;

int main(){
    // int age[AGE_LENGTH]; // Trying with a macro (This will not work!)
    int age[4]; // Declare an array of 4 integers

    const size_t AGE_LENGTH = 4; // Declare a constant integer
    float temperature[] = {31.5, 32.7, 38.9}; // Declare an array of 3 floats and initialize them

    age[0] = 25; // Assign 25 to the first element
    age[1] = 20; // Assign 30 to the second element
    age[2] = 19; // Assign 19 to the third element
    age[3] = 19; // Assign 19 to the fourth element

    std::cout << "age[0]: " << age[0] << std::endl;
    std::cout << "age[1]: " << age[1] << std::endl;
    std::cout << "age[2]: " << age[2] << std::endl;
    std::cout << "age[3]: " << age[3] << std::endl;

    std::cout << "temp[0]:" << temperature[0] << std::endl;
    std::cout << "temp[1]:" << temperature[1] << std::endl;
    std::cout << "temp[2]:" << temperature[2] << std::endl;



    std::cout << std::endl << std::endl;
    return (0);
}
