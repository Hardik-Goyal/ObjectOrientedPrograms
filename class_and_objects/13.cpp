#include<iostream>
using namespace std;
class test {
    static int a;
    public:
    static int b;
};
//allowed even for a private member
int test::a=10;
int test::b=10;
int main ()
{
    test::b=20;//works fine as b is public
    //note that int is missing
    //int test::a; 
    //the above line gives error 
    //while the same line do not give error outside main 
    //note that a is a private member
    test x;
    x.b++;
    cout<<x.b++;
    cout<<endl<<test::b;
    return 0;
}