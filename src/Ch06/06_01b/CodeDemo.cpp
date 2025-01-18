// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream> // Include this library to work with files

int main(){
    std::ifstream inFile; // Declare a file stream object
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt"); // Open the file with the InFile object
    if (inFile.fail()) // Checking to see if the file was opened successfully
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str); // Get the first line in the file
            std::cout << str << ", ";
            getline(inFile, str); // Get the next line in the file
            number = stoi(str); // Convert the string to an integer
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0]; //In this case, we only want the first character of the string
            std::cout << letter << std::endl;
        }
        inFile.close(); //Close the file when finished
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
