// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    float points = 0.00f;
    float credits = 0.0f;

    for (Grade& grd : grades)
        if (grd.get_student_id() == id) {
            float num_grd;
            switch (grd.get_grade()) {
                case 'A': num_grd = 4.0f;
                    break;
                case 'B': num_grd = 3.0f;
                    break;
                case 'C': num_grd = 2.0f;
                    break;
                case 'D': num_grd = 1.0f;
                    break;
                default: num_grd = 0.0f;
                    break;
            };

            int j = 0;
            while (j < courses.size() && courses[j].get_id() != grd.get_course_id())
                j++;
            credits += courses[j].get_credits();
            points += num_grd * courses[j].get_credits();
        }

    GPA = points / credits;


    std::string student_str;

    int i = 0;
    while (i < students.size() && students[i].get_id() != id)
        i++;

    student_str = students[i].get_name(); // Change this to the selected student's name
    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
