#include<iostream>
using namespace std;
class myclass {
    static int a;
    public:
    static int myclass::*ptr=&myclass::a;
};
int myclass::a;
int myclass::ptr;
int main ()
{
    //note that a gets memory even without the creation of any object
    //a being a private member has tobe evaluated using pointers that are also static
    cin>>(myclass::*ptr);
    cout<<(myclass::*ptr);
    return 0;
}