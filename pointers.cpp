//Pointers in C++ | C++ Tutorials for Beginners #12

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *b = &a; // pointer b is storing the address of a
    cout << "The value of a is: " << a << endl;
    cout << "The address of a is: " << &a << endl;
    cout << "The value of b is: " << b << endl; // address of a
    cout << "The value at the address stored in b is: " << *b << endl; // value of a
}
