//C++ Control Structures, If Else and Switch-Case Statement | C++ Tutorials for Beginners #9
#include <iostream>
using namespace std;


/*int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18) {
        cout<< "you are a minor." <<endl;
    }else if (age>= 18 && age < 60){
        cout << "you are an adult." <<endl;
    }else{
        cout << "you are a senior citizen." <<endl;
    }
    return 0;

}*/
int main2(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    switch (age) {
    case 18:
            cout<<"you are 18 years old."<<endl;
            break;
    defult:
            cout<<"you are not 18 years old."<<endl;
            break;
    }
}