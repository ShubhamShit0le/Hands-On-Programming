#include<iostream>
using namespace std;
typedef unsigned int UINT;



 UINT ToggleBit(int iNo,UINT iPos1 , int iPos2)
 {
   UINT iMask1 = 0X00000001;
   UINT iMask2 = 0X00000001;
   UINT iMask = 0;


   if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
   {
    return 0;
   }


   int iResult = 0;

   iMask1 = iMask1 <<(iPos1-1);
   iMask2 = iMask2 <<(iPos2-1);

   iMask = iMask1 | iMask2;

   iResult = iNo ^ iMask;

   return iResult;

 }


int main()
{

   UINT iBit1 = 0;
   UINT iBit2 = 0;
   int iRet = 0;
   int iVal = 0;

   cout<<"\nEnter Number : ";
   cin>>iVal;

  cout<<"\nEnter first Position Of Bit : ";
  cin>>iBit1;

  cout<<"\nEnter Second Position Of Bit : ";
  cin>>iBit2;

  iRet  = ToggleBit(iVal,iBit1,iBit2);
  
  cout<<"\nUpdated Number Is : "<<iRet<<"\n";

	return 0;
}