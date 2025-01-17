// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    average = 0.00f;

    for (int i = 0; i < numbers.size(); i++) { // Basic for loop iterating through the whole vector
        average += numbers[i];
    }
    average /= numbers.size();
    std::cout << "The average of the numbers is: " << average << std::endl;

    average = 0.00f;
    for (auto number : numbers) { // Range-based for loop iterating through the whole vector using auto
        average += number;
    }
    average /= numbers.size();
    std::cout << "The average of the numbers is: " << average << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
