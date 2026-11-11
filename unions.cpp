//Structures, Unions & Enums in C++ | C++ Tutorials for Beginners #14

#include <iostream>
using namespace std;

typedef struct Student {
    int id;
    string name;
    char grade;
    float marks;
} S; 
/*
this is a typedef struct, which allows you to use the name 'S' as an alias for
 'struct Student'. This can make your code cleaner and easier 
 to read, especially when you have multiple instances of the struct.*/  
union Data {
    int i;
    float f;
    char str[20];
};

int main(){

    enum Color { RED, GREEN, BLUE };// enum is a user-defined data type that consists of integral constants.
    cout << "Color RED: " << RED << endl;
    cout << "Color GREEN: " << GREEN << endl; 
    S s1;
    s1.id = 1;
    s1.name = "John";
    s1.grade = 'S';
    s1.marks = 95.5;
    cout<<"Student ID: "<<s1.id<<endl;
    cout<<"Student Name: "<<s1.name<<endl;
    cout<<"Student Grade: "<<s1.grade<<endl;

    return 0;
    
}

