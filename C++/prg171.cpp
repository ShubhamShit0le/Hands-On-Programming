#include<iostream>
using namespace std;
typedef unsigned int UINT;



 UINT ToggleRange(UINT iNo,int iStart,int iEnd)
 {
    UINT iMask1 = 0xffffffff;
    UINT iMask2 = 0xffffffff;
  
    UINT iMask = 0;

    int iResult = 0;

    
    iMask1 = iMask1 << (iStart-1);

    iMask2 = iMask2 >>(32-iEnd);


    iMask = iMask1 & iMask2;

    
    iResult = iNo ^ iMask;

    return iResult;
    

 }

int main()
{

   UINT iRet = 0;
   UINT iVal = 0,i,j;

   cout<<"\nEnter Number : ";
   cin>>iVal;

   cout<<"\nEnter Starting Position : ";
    cin>>i;

   cout<<"\nEnter End Position : ";
   cin>>j;



  iRet  = ToggleRange(iVal,i,j);
  
  cout<<"\nUpdated Number Is : "<<iRet<<"\n";

	return 0;
}