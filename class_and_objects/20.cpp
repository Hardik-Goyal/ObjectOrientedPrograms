#include<iostream>
using namespace std;
class a {
    int a;
    int b;
    public:
     void set(int x,int y)
     {
         a=x;
         b=y;
     }
    void get()
    {
        cout<<a<<" "<<b;
    }
};
int main ()
{
    a o1;
    o1.set(2,3);
    o1.get();
    return 0;
}