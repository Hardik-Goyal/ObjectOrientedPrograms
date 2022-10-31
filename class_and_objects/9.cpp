#include <iostream>
using namespace std;
class Number
{
	private:
		int num=0;
	public:
	void inputNumber (void)
		{
			cout<<"Enter an integer number: ";
			cin>>num;
		}
		//member function to display number 
		void displayNumber()
		{
			cout<<"Num: "<<num<<endl;
		}
};
int main()
{

	Number N;
	N.inputNumber();
	N.displayNumber();

	//declaring pointer to the object 
	Number *ptrN;
	ptrN = new Number; //creating & assigning memory 
	
	//printing default value
	cout<<"Default value... "<<endl;
	//calling member function with pointer 
	ptrN->displayNumber();
	
	//input values and print 
	ptrN->inputNumber();
	ptrN->displayNumber();

	return 0;
}
