 #include<iostream> 
using namespace std;
  struct Subjects//declaring structure
 {
 
  char Name[25]="C++"; //definition of structures
  char Author[25]="XYZ";
  int Code=9000;
 
};
int main()
{
  Subjects s1;
  cout<<s1.Name<<" "<<s1.Author<<" "<<s1.Code<<endl;
 

}