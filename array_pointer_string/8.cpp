#include <iostream>  
using namespace std;  
int main()  
{  
int a=20,b=10;
int *p,*q; 
p=&a;
q=&b;   
cout<<"Before swap: *p="<<*p<<" *q="<<*q<<endl;    
*p=*p+*q;    //addition of parameter
*q=*p-*q;    //subtraction of parameter
*p=*p-*q;    
cout<<"After swap: *p="<<*p<<" *q="<<*q<<endl;    //swapping
   return 0;  
} 