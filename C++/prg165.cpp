#include<iostream>
using namespace std;
typedef unsigned int UINT;



 /*

 op1  op2  &  |  ^

 1     0   0  1  1
 0     1   0  1  1
 1     1   1  1  0
 0     0   0  0  0
 

*/



 UINT ToggleBit(UINT iNo , int iPos)
 {
   UINT iMask = 0X00000001;

   if((iPos < 1) || (iPos > 32))
   {
    return 0;
   }


   int iResult = 0;

   iMask = iMask <<(iPos-1);

   iResult = iNo ^ iMask;

   return iResult;

 }


int main()
{

   UINT iVal = 0;
   int iBit = 0;
   int iRet = 0;


  cout<<"\nEnter Number You Want : ";
  cin>>iVal;

  cout<<"\nEnter Position Of Bit You Want : ";
  cin>>iBit;

  iRet  = ToggleBit(iVal,iBit);
  
  cout<<"\nUpdated Number Is : "<<iRet<<"\n";

	return 0;
}