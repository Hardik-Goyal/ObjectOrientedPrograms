#include<iostream>
using namespace std;
class myclass{
    public:
    static int a;
};
int myclass::a;
int main ()
{
    //note that i have not created even then static member gets memory
    myclass :: a=20;
    cout<<" a = "<<myclass::a<<endl;
    // i am creating objects here
    myclass o1,o2;
    cout<<" a of o1 "<<o1.a<<endl;
    cout<<" a of o2 "<<o1.a<<endl;
    //comes same
    return 0;
}
