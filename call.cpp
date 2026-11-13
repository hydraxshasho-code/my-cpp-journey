//Call by Value & Call by Reference in C++ | C++ Tutorials for Beginners #16

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

//swapping using third variable
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers:\n";
    
    cout<< "enter first number: ";
    cin>> num1; 
    
    cout<< "enter second number: ";
    cin>> num2; 
    
    cout << "Sum: " << sum(num1, num2) << endl;
    //num1 and num2 are passed as arguments;
    //a and b are parameters of the fn sum
    swapNumbers(num1, num2); // calling swapNumbers() function
    cout << "After swapping: \n";
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}