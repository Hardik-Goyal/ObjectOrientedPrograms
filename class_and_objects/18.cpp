#include<iostream>
using namespace std;
class B;
class A{
    int a =30;
    friend void sum(A,B);
    //friend fxn is not a member of class b hence i have not used :: operator
};

class B{
    int b =20;
    //friend fxn defined inside this class
    friend void sum(A x,B y)
    {
        cout<<"The sum of 2 numbers is "<<endl;
        cout<<x.a+y.b;
    }
};

int main ()
{
    A x;
    B y;
    sum(x,y);//calling sum
    return 0;
}