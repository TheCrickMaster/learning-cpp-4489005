// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    void set_age(int age_i){ // Setter to set cow age
        age = age_i;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Betsy", 5, cow_purpose::dairy); // Using the Constructor
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl; //Using the getters 
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl; // Using the getters
    
    std::cout << std::endl << std::endl;
    return (0);
}
