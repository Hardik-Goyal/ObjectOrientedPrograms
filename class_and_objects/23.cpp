#include <iostream>
using namespace std;

class Rectangle {//declaring rectangle class 
	int width, height;

public:
	Rectangle(int w = 1, int h = 1):width(w),height(h){} 
	friend void display(Rectangle &);//friend function
};

void display(Rectangle &r) {
	cout << r.width * r.height << endl;
}

int main () {
	Rectangle rect(5,10);
	display(rect);
	return 0;
}