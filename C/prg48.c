/*

Accept N numbers from user and return difference between summation 
of even elements and summation of odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

int DiffEvenOdd(int Brr[],int iLength)
{

  int i =0;
  int iEven = 0;
  int iOdd = 0;

  for(i = 0; i < iLength; i++)
  {
  	if((Brr[i] % 2) == 0)
  	{
  		iEven = iEven + Brr[i];
  	}
  	else if((Brr[i] % 2) != 0)
  	{
  		iOdd = iOdd + Brr[i];

  	}
  }

 return iEven - iOdd;

}


int main()
{

  int iSize = 0;
  int *ptr = NULL;
  int i = 0;
  int iRet = 0;

  printf("\nEnter Array Size  : ");
  scanf("%d",&iSize);
  ptr = (int*)malloc(iSize *sizeof(int));

  printf("\nEnter Array Elements :\n");

  for(i = 0; i < iSize; i++)
  {
  	scanf("%d",&ptr[i]);
  }


iRet = DiffEvenOdd(ptr,iSize);

if(iRet < 0)
  {
  	
  	iRet = -iRet;

  }
 
 printf("\nDifference is : %d",iRet);

 printf("\n");

 free(ptr);

 return 0;


}