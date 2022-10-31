#include<iostream>
using namespace std;

int main()
{
const int W = 5;
const int H = 3;

int Table[H][W];//declare array
int n,m;

  for (n=0; n<H; n++)//initialise
    for (m=0; m<W; m++)
    {
      Table[n][m]=(n+1)*(m+1);
    }
     for (n=0; n<H; n++){//print
    for (m=0; m<W; m++)
    {
      cout<<Table[n][m]<<" ";
    }cout<<endl;}
}