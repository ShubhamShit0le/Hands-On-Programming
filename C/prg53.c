/*

Accept N numbers from user and return Count of even numbers.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 3

*/


#include<stdio.h>
#include<stdlib.h>


int Count(int Brr[],int iLength)
{
  
  int i = 0;
  int iCnt = 0;

  for(i = 0; i < iLength; i++)
  {
  	if((Brr[i] % 2) == 0)
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
 
 iRet = Count(ptr,iSize);
 
 printf("\nCount Of Even Number Is : %d",iRet);

  printf("\n");

  free(ptr);

  return 0;

}