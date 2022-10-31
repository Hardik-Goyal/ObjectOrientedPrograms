#include<iostream>
using namespace std;
class pro//class declaration
{  int v;
   public:
    void input()
      {
         cout << "In function input, Enter an integer\n";
         cin >> v;
      }
      void output()
      {
         cout << "v entered is ";
         cout << v << "\n";
      }
};

main()
{
   pro obj;//obj declaration
   obj.input();//calling member function
   obj.output();
 return 0;
}