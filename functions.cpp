//Functions & Function Prototypes in C++ | C++ Tutorials for Beginners #15

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
void g(); // function prototype for g()

int main() {
    // Function to add two numbers
    int num1, num2;
    
    cout << "Enter two numbers:\n";
    
    cout << "enter first number: ";
    cin >> num1; 
    
    cout << "enter second number: ";
    cin >> num2; 
    
    cout << "Sum: " << sum(num1, num2) << endl;
    //num1 and num2 are passed as arguments;
    //a and b are parameters of the fn sum
    g(); // calling g() function

    return 0;
}

void g() {
    cout << "This is function g()" << endl;
}