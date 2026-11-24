#include <iostream>
#include <iomanip>
using namespace std;
class StudentReport{
    private:
    int marks1;
    int marks2;
    int marks3;
    public :
    void setmarks(int m1, int m2 , int m3){
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }
    int getTotal(){
        return marks1+marks2+marks3;
    }
    double getAvg(){
        return getTotal()/3.0;
        
    }
};

int main (){
    int m1 ,m2,m3;
   if (cin>>m1>>m2>>m3){
       StudentReport s;
       s.setmarks(m1,m2,m3);
       cout<< s.getTotal()<<" ";
       cout<<fixed<<setprecision(2)<<s.getAvg();
   }
}