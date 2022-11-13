/*

Write a c++ program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108

*/



#include<iostream>
using namespace std;


int RangeEvenAdd(int iStart,int iEnd)
{

  int i = iStart;
  int iSum = 0;


  while(i <= iEnd)
  {
  	 
    if((i % 2)== 0)
    {
     
      iSum = iSum + i;
     
    }
    
     i++;

  }
 
  return iSum;

}


int main()
{

int iVal1 = 0;
int iVal2 = 0;
int iRet = 0;

cout<<"\nEnter starting point : ";
cin>>iVal1;

cout<<"\nEnter ending point : ";
cin>>iVal2;

iRet = RangeEvenAdd(iVal1,iVal2);

if(iRet < 0)
{
	iRet = -iRet;
}

cout<<"\nAddition is : "<<iRet;

cout<<"\n";

return 0;


}

