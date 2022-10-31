#include <iostream>
using namespace std;
int main () {
 int  a = 10;   // variable declaration.
 int  *p;        // pointer variable
 p = &a;       // store address of a in pointer variable
 cout << "The value of ‘a’ variable: ";
 cout << a << endl;
 // print the address stored in p pointer variable
 cout << "The address stored in p variable: ";
 cout << p << endl;
 // access the value at the address available in pointer
 cout << "The value of *p variable: ";
 cout << *p << endl;
 return 0;
 
}