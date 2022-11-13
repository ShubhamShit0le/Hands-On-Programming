/*

Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 0
Input : N : 6
Elements :85 11 3 15 11 111
Output : 2

*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int CountEven(int Brr[] , int iLength)
{

    int i  = 0;
    int iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
    	if(Brr[i] == 11)
    	{
    		iCnt++;
    	}
    }
  
   return iCnt;

}

int main()
{
  int *ptr = NULL;
  int iSize = 0;
  int iRet  = 0;
  int i = 0;
   
  cout<<"\nEnter Array Size : ";
  cin>>iSize;

  ptr = new int[iSize];

  cout<<"\nEnter Array Elements :\n";

  for(i = 0; i < iSize; i++)
  {
  	cin>>ptr[i];
  }
  
   iRet = CountEven(ptr,iSize);

   cout<<"\nCount Is : "<<iRet;

   delete []ptr;

   cout<<"\n";

   return 0;

}