// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{ // Note that we have changed from struct to class. This is no longer public
public: // We use the public keyword to make the members of the class accessible from outside the class 
    std::string name;
    int age;
    cow_purpose purpose;
};

class dog{
private: // We use the private keyword to make the members of the class inaccessible from outside the class
    std::string name;
    int age;
    std::string breed;
public:
    dog(std::string inputName, int inputAge, std::string inputBreed){ // Constructor
        name = inputName;
        age = inputAge;
        breed = inputBreed;
    }
public:
    std::string get_name() const{ // basic getter function
        return name;
    }
    int get_age() const{ // basic getter function
        return age;
    }
    std::string get_breed() const{ // basic getter function
        return breed;
    }
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
