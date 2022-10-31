#include<iostream>
using namespace std;


class A {       // The class
  public:             // Access specifier
    int B;        // Attribute (int variable)
    string C;  
};

int main() {
  A myObj;  // Create an object of A

  // Access and set values
  myObj.B = 15; 
  myObj.C = "Sanskar";

  // Print values
  cout << myObj.B << "\n";
  cout << myObj.C;
  return 0;
}