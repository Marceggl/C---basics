#include <iostream>

int main(){

    // Integer variables
    int age = 21;
    int year = 2002;
    int days = 5;

    std::cout << "Who born in " << year << " is problabily " << age << " years old" << "\n";

    //double (includes decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 19.5;

    //Single Character
    char grade = 'A';
    char initial = 'C';
    char dollar = '$';

    //Boolean (True or False)
    bool student = false;
    bool power = true;
    bool raining = false;

    //Strings (Object that represents a sequence of text)
    std::string name = "Jorge";
    std::string food = "pizza";

    //Print variable and direct strings
    std::cout << name << " likes " << food;

    return 0;
}