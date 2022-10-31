#include<iostream>
using namespace std;
class Student//declaring a student class 
{
    public:
    int rollno;
    string name;
};

int main()
{
    Student A;
    Student B;
    
    // setting values for object A
    A.rollno=1;
    A.name="Adam";
    
    // setting values for object B
    B.rollno=2;
    B.name="Bella";

    cout <<"Name and Roll no of A is: "<< A.name << "-" << A.rollno<<endl;
    cout <<"Name and Roll no of B is: "<< B.name << "-" << B.rollno;
}
