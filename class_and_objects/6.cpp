#include <iostream>
#include <string.h>
using namespace std;
class M
{
	private:
		char str[30];
		//static data member to count the objects
		static int count;
		public:
		//member function to initialise M
		void initM(char s[])
		{
			strcpy(str,s);
		}
		//member function to print M
		void printM(void)
		{
			cout << str << endl;
		}
		//static member function
		static int totalObjects(void)
		{
			return count;
		}
};
int M::count =0;
int main()
{
	M M1,M2;
	M1.initM("M one");
	M2.initM("M two");
	M1.printM();
	M2.printM();
	//printing object count 
	cout << "Total objects created: " << M::totalObjects() << endl;
	return 0;
}
