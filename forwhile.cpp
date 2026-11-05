//For, While and do-while loops in C++ | C++ Tutorials for Beginners #10

#include <iostream>
using namespace std;
int main(){
    /*three types of loop in C++:
    1. for loop
    2. while loop
    3. do-while loop (not in python)

    */
   //for loop
   for(int i=0; i<5; i++){
        cout << "The value of i is: " << i << endl;
    }
    
    //while loop
    int i=0;
    while (i<=40){
        cout << "The value of i is: " << i << endl;
        i++;
    }
    //do-while loop
    int j=0;
    do{
        cout << "The value of j is: " << j << endl;
        j++;
    }while(j<5);
    int m=1;
    do{
        cout << "The value of m is: " << m << endl;
        m++;
    }while(false);//this will run only once because the condition is false 


    //homework: print the table of 6 
    for(int i=1; i<=10; i++){
        cout << "6 * " << i << " = " << 6*i << endl;
    }

    //homework: print the table of 7 using while loop
    int n=1;
    while(n<=10){
        cout<<"7 *"<<n<<"="<<7*n<<endl;
        n++;
    }

    //homework: print the table of 8 using do-while loop
    int p=1;
    do{
        cout<<"8 *"<<p<<"="<<8*p<<endl;
        p++;
    }while(p<=10);
    return 0;
}

