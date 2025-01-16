// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow; // Using pointers for dynamic memory allocation

    my_cow = new cow("Gertie", 3, cow_purpose::hide); // Using the new keyword to allocate memory for the cow object
    std::cout << (*my_cow).get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl; // Deferecing the pointer to access the object's methods
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl; // Using the arrow operator to access the object's methods (Better Method)

    delete my_cow; // Using the delete keyword to deallocate memory for the cow object in order to free memory and avoid memory leaks
    
    std::cout << std::endl << std::endl;
    return (0);
}
