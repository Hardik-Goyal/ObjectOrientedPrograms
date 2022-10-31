#include <iostream>
using namespace std;
 #define MAX 10
 class student
{
    private:
        char  name[30];
        int   rollNo;
    public:
        //member function to get student's details
        void getfun(void);
        //member function to print student's details
        void putfun(void);
};
 
//member function definition, outside of the class
void student::getfun(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
   }
 //member function definition, outside of the class
void student::putfun(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo;
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
    for(i=0;i< n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].getfun();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "Details of student " << (i+1) << ":\n";
        std[i].putfun();
    }
     
    return 0;
}