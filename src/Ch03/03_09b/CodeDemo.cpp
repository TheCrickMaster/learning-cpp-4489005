// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector> // Include the vector library

int main(){
    std::vector<int> primes; // Declare a vector of integers

    primes.push_back(2); // Add the first prime number
    primes.push_back(3); // Add the second prime number
    primes.push_back(5); // Add the third prime number
    primes.push_back(7); // Add the fourth prime number


    std::cout << "The vector has " << primes.size() << " elements." << std::endl;

    std::cout << "The element at index 2 is " << primes[2] << std::endl; // Print out the element at index 2 of the vector with square bracket notation


    std::cout << std::endl << std::endl;
    return (0);
}
