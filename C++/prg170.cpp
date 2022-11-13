#include<iostream>
using namespace std;
typedef unsigned int UINT;



 UINT ToggleNibble(UINT iNo)
 {
   UINT iMask = 0Xf000000f;


   int iResult = 0;


   iResult = iNo ^ iMask;

   return iResult;

 }

int main()
{

   UINT iRet = 0;
   UINT iVal = 0;

   cout<<"\nEnter Number : ";
   cin>>iVal;


  iRet  = ToggleNibble(iVal);
  
  cout<<"\nUpdated Number Is : "<<iRet<<"\n";

	return 0;
}