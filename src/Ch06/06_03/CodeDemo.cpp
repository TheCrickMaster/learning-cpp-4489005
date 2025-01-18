// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

void initialize(StudentRecords&);
void initialize(StudentRecords&, std::ifstream&);

int main(){
    int id;
    StudentRecords SR;
    std::ifstream inFile; // Create file stream object
    std::ofstream outFile; // Create file steam object
    
    initialize(SR, inFile); // Initialize the student records object
    SR.report_file(outFile); // Call a member function to write to a file

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A'); 
    srec.add_grade(2, 2, 'A');
    srec.add_grade(2, 4, 'B');
}
void initialize(StudentRecords& srec, std::ifstream& inFile){
    int id;
    std::string name;
    std::string course;
    int credits;
    char grade;

    inFile.open("records.txt");
    if (inFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        while (inFile >> id >> name >> course >> credits >> grade){
            srec.add_student(id, name);
            srec.add_course(id, course, credits);
            srec.add_grade(id, credits, grade);
        }
        inFile.close();
    }
}
