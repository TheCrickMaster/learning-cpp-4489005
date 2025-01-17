// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    auto ptr = numbers.begin(); // Use of auto to assign variable type

    while (ptr != numbers.end()) { // While loop to iterate through the numbers vector
        std::cout << *ptr << std::endl;
        ptr++;
    }

    int i = 0;
    do { // Do-While loop to iterate through the numbers vector
        std::cout << numbers[i] << std::endl;
        i++;
    } while (i < numbers.size());
    
    std::cout << std::endl << std::endl;
    return (0);
}
