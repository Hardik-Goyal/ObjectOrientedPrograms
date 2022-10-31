 
#include <iostream>
#include <iomanip>
using namespace std;
 class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getT(void);
        void convert(void);
        void disT(void);
};
 void Time::getT(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";cin >> hh;
    cout << "Minutes? "; cin >> mm;
    cout << "Seconds? ";cin >> ss;
}
 
void Time::convert(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::disT(void)
{
    cout << "The time is = " << hh << ":"<< mm << ":"<< ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; //creating objects
     
    T.getT();
    T.convert();
    T.disT();
     
    return 0;
}