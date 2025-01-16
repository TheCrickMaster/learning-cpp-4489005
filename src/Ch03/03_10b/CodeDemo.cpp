// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle; // Initialize a vector of cow objects

    cattle.push_back(cow("Bessie", 3, cow_purpose::meat));
    cattle.push_back(cow("Libby", 5, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 2, cow_purpose::pet));
    cattle.push_back(cow("Milkshake", 1, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl; // Get the name of the first cow in our vector with the begin function
    std::cout << "The next cow is " << cattle[1].get_name() << std::endl; // Get the name of the second cow in our vector with the [] operator
    std::cout << "Next, we have " << prev(cattle.end(), 2)->get_name() << std::endl; // Get the name of the third cow in our vector with the prev function
    std::cout << "The last cow is " << prev(cattle.end())->get_name() << std::endl; // Get the name of the last cow in our vector with the prev function

    
    std::cout << std::endl << std::endl;
    return (0);
}
