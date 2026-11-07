//Arrays & Pointers Arithmetic in C++ | C++ Tutorials for Beginners #13
// C++ program to demonstrate the use of arrays and pointer arithmetic
#include <iostream>
using namespace std;
int main(){
    int marks[] = {10, 20, 30, 40};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathsmarks[4]; 
    //here i realised its mandatory to define the size of the array while declaring it...

    mathsmarks[0] = 100;
    mathsmarks[1] = 200;
    mathsmarks[2] = 300;
    mathsmarks[3] = 400;
    cout<<"this is mathsmarks"<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;  

    //you can change the values 
    marks[0] = 1000;
    cout<<"this is updated  marks"<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;  


    for(int i=0; i<4; i++){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;

    }

    //Assignment by codewithharry using while loop
    int i = 0;
    while(i<4){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } 
    //pointer arithmetic
    int* p = marks;
    cout<<"the value of marks[0] is "<<*p<<endl;
    p++;
    cout<<"the value of marks[1] is "<<*p<<endl;
    p++;
    cout<<"the value of marks[2] is "<<*p<<endl;

    //another way of writing the above code is
    int* p1 = marks;
    cout<<"the value of marks[0] is "<<*p1<<endl;
    cout<<"the value of marks[1] is "<<*(p1+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p1+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p1+3)<<endl;

    cout<<*(p1+0)<<endl; //simply value printed at index 0
    cout<<*(p1+1)<<endl; //simply value printed at index 1


    cout<<*(++p1)<<endl; //simply value printed at index 1
    cout<<*(+p1)<<endl;
    cout<<*(++p1)<<endl; //simply value printed at index 2
    return 0;
    



}