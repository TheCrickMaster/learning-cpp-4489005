// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37; // Assigning a to 37
    int *ptr; // Declaring a pointer to an integer

    ptr = &a; // Assigning the address of a to the pointer

    std::cout << "The content of a is: " << a << std::endl; // Printing the value of a
    std::cout << "ptr is pointing to address: " << ptr << std::endl; // Printing where the pointer is pointing to
    std::cout << "The address of a is: " << &a << std::endl; // Printing the address of a
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl; // Printing the value of a using the pointer
    std::cout << "The address of ptr is: " << &ptr << std::endl; // Printing the address of the pointer



    std::cout << std::endl << std::endl;
    return (0);
}
