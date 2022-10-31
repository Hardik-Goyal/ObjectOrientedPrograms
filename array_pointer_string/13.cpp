#include<iostream>
using namespace std;
struct Student //declaring stucturs
    {
           int Id= 25;
           char Name[25]="ABC";//definition
    };
int main()
{
    Student s1;
    cout<<s1.Id<<" "<<s1.Name;//accessing element using . operator

}