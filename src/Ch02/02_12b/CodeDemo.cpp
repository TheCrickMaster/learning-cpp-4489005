// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum cow_purpose {dairy, meat, hide, pet}; // Example of enumeration 
/*
Enumerations are usually operated in the global scope, but can be operated in a class scope. They are very dangerous, this is why we use the enum class and enum classes
*/

 // enum grocery_section {canned, frozen, meat, laundry, dairy, bakery}; // This causes issues since we have two enumerations with the same name for both of the enumerations. This is why we use enum classes

enum class grocery_section_class {canned, frozen, meat, laundry, dairy, bakery}; // This is the correct way to declare an enumeration, this is the way to avoid the issues of having two enumerations with the same name

int main(){
    int a;
    int meat = 8; // We are declaring meat in the local scope, so it will be used instead of the enumeration meat
     

    a = cow_purpose::meat; // This is the correct way to use the enumeration

    
    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
