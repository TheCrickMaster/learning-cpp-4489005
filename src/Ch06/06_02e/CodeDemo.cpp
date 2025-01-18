// Learning C++ 
// Exercise 06_02
// Opening a text file for writing, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ofstream outFile; //Declaration of on output file stream object
    float a = 4.333f, b = 5.302f;

    outFile.open("calculations.txt");
    if (outFile.fail()) //Checking if the file was opened successfully
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        outFile << "a = " << a << std::endl; // Writing to the file
        outFile << "b = " << b << std::endl; // Writing to the file
        outFile << "a + b = " << a + b << std::endl; // Writing to the file
        outFile << "a * b = " << a * b << std::endl; // Writing to the file
        outFile.close(); // Closing the file
        std::cout << "File written successfully!" << std::endl; // Making sure everything works
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
