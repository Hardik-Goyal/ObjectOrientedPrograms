#include<iostream>
using namespace std;
class book{
	public:
	string name;
	string author;
	int pages;
};
int main ()
{
	book b1={"OOPS","Balagurusamy",200};
	book *b2=&b1;
	cout<<b1.name<<" "<<b1.author<<" "<<b1.pages<<endl;
	cout<<b2->name<<" "<<b2->author<<" "<<b2->pages;
	return 0;
}
