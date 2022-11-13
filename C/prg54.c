/*

Accept N numbers from user and return difference between frequency of 
even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)

*/





#include<stdio.h>
#include<stdlib.h>


int Frequency(int Brr[],int iLength)
{
  
  int i = 0;
  int eCnt = 0;
  int oCnt = 0;

  for(i = 0; i < iLength; i++)
  {
  	if((Brr[i] % 2) == 0)
  	{
  		eCnt++;
  	}
  	else if((Brr[i] % 2) != 0)
  	{
  		oCnt++;
  	}
  }

  return eCnt - oCnt;
}


int main()
{
  int *ptr = NULL;

  int iSize = 0;
  int iRet = 0;
  int i = 0;

 printf("\nEnter Array Size : ");
 scanf("%d",&iSize);

 ptr = (int*)malloc(sizeof(int) * iSize);

 printf("\nEnter Array Elements :\n");
 for(i = 0; i < iSize; i++)
 {
 	scanf("%d",&ptr[i]);
 }
 
 iRet = Frequency(ptr,iSize);

 if(iRet < 0)
 {
 	iRet = -iRet;
 }
 
 printf("\nFrequency Is : %d",iRet);

  printf("\n");

  free(ptr);

  return 0;

}