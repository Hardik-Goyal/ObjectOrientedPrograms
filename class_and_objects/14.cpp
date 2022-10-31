#include<iostream>
using namespace std;
class date{
    int d,m,y;
    public:
    friend istream& operator>>(istream&,date&);
    friend ostream& operator<<(ostream&,date&);
    bool equal (date b)
    {
        if(y==b.y&&m==b.m&&d==b.d)
        return 1;
        return 0;
    }
};
istream& operator>>(istream& din,date& d)
{
    cin>>d.d>>d.m>>d.y;
}
ostream& operator<<(ostream& dout,date& d)
{
    cout<<d.d<<d.m<<d.y;
}
int main ()
{
    date d1,d2;
    cout<<"Enter date 1\n";
    cin>>d1;
    cout<<"Enter date 2\n";
    cin>>d2;
    if(d1.equal(d2))
    cout<<"the 2 dates are equal \n";
    else
    cout<<"The 2 dates are not equal\n";
    return 0;
}