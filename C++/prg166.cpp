#include<iostream>
using namespace std;
typedef unsigned int UINT;


 UINT CountBit(UINT iNo)
 {
   UINT iMask = 0X00000001;
   int i = 0;
   int iCnt = 0;
   int iResult = 0;

   for(i = 1; i < 32; i++)
    {
      iResult = iNo & iMask;
      if(iResult != 0)
      {
        iCnt++;
      }

      iMask = iMask << 1;

    }
    return iCnt;
 }


int main()
{

   UINT iVal = 0;
   int iRet = 0;


  cout<<"\nEnter Number You Want : ";
  cin>>iVal;

  iRet  = CountBit(iVal);
  
  cout<<"\nCount Of On Bits Are: "<<iRet<<"\n";

	return 0;
}