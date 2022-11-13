#include<iostream>
using namespace std;
typedef unsigned int UINT;



 UINT SwapByte(UINT iNo)
 {
   
   UINT iMask = 0x00ffff00;

   UINT iTemp = iNo & iMask;
   
   UINT Byte1 = iNo << 24;

   UINT Byte4 = iNo >> 24;

   
   UINT iRet = iTemp | Byte1 | Byte4;

   return iRet;




 }

int main()
{


   UINT iVal = 0;
   UINT iResult = 0;

   cout<<"\nEnter Number : ";
   cin>>iVal;


  iResult = SwapByte(iVal);

  cout<<"\nData Is : "<<iResult<<"\n";
  

	return 0;
}