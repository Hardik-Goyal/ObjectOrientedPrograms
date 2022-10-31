#include <iostream>
using namespace std;
class student
{
   private:
     int roll_number;
   public:
     char name[10];
     int func1()
     {
         roll_number = 86;
         return roll_number;
     }
};
int main()
{
    student s1; //creating object s1 of class type student
    cout << s1.func1();
    return 0;
}
