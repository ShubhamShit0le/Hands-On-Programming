/*

Write a c++ program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

*/


#include<iostream>
using namespace std;


void DisplayRangeRev(int iStart,int iEnd)
{

  int i = iEnd;

  cout<<"\n";

  while(i >= iStart)
  {
  	cout<<i<<"\t";

  	i--;

  }


}


int main()
{

int iVal1 = 0;
int iVal2 = 0;

cout<<"\nEnter starting point : ";
cin>>iVal1;

cout<<"\nEnter ending point : ";
cin>>iVal2;

DisplayRangeRev(iVal1,iVal2);

cout<<"\n";

return 0;


}

