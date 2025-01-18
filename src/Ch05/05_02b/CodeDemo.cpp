// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

int square(int x) {
    return x * x;
}

// Swap function taking arguments by address
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Swap function taking arguments by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a); // Squaring function
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); // Swap function with addresses
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b); // Swap function with references
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
