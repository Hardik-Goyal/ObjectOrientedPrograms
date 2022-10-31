#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void set(int x,int y)
    {   
        a=x;
        b=y;
    }
    int getreal(void)
    {
        return a;
    }
    int getimaginary(void)
    {
        return b;
    }
};
complex sum(complex x,complex y)
    {
        int a,b;
        complex z;
        a=x.getreal()+y.getreal();
        b=x.getimaginary()+y.getimaginary();
        z.set(a,b);
        return z;
    }
    int main ()
    {
    complex x,y,z;
    int a,b;
    cout<<"Enter a complex number\n";
    cin>>a>>b;
    x.set(a,b);
    cout<<"The imaginary part is \n"<<x.getimaginary();
    cout<<"\nThe real part is \n"<<x.getreal();
    cout<<"\nEnter another complex no\n";
    cin>>a>>b;
    y.set(a,b);
    z=sum(x,y);
    cout<<"The sum of 2 complex numbers is \n"<<z.getreal()<<" + "<<z.getimaginary()<<"i";
    return 0;
}