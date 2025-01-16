// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum cow_purpose {dairy, meat, hide, pet};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

/*
This is how to create a C++ structure. Note that the enum cow_purpose can be used locally in the structure. Structures must have a semi colon at the end
*/

int main(){
    
    cow my_cow;
    my_cow.name = "Betsy";
    my_cow.age = 5;
    my_cow.purpose = cow_purpose::dairy;

    std::cout << "My cow's name is " << my_cow.name << std::endl;
    std::cout << "My cow's age is " << my_cow.age << std::endl;
    std::cout << "My cow's purpose is " << (int) my_cow.purpose << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
