#include <iostream>
using namespace std; 
void print(int A[][3],int N, int M)
{
  for (int R = 0; R < N; R++){
    for (int C = 0; C < M; C++)
       cout << A[R][C]<<" ";
       cout<<endl;}
}
int main ()
{
  int arr[4][3] ={{12, 29, 11},//multidimentional array initialisation
                  {25, 25, 13},
                  {24, 64, 67},
                  {11, 18, 14}};
  print(arr,4,3);//print function
  return 0;
}