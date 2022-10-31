#include<iostream>
using namespace std;
class myclass {
    static int a;
    public:
    static void setdata(void);
    static void getdata(void);
};
int myclass:: a;
void myclass ::setdata(void )
{
    cout<<"Enter a number \n";
    cin>>a;
}
void myclass:: getdata(void)
{
    cout<<"This is what you have entered \n";
    cout<<a;
}
int main ()
{
    //note that a gets memory even without the creation of any object
    //a being a private member has to be manipulated using static member fxns
    myclass::setdata();
    myclass::getdata();
    return 0;
}