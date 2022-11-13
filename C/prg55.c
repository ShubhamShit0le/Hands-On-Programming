/*

Accept N numbers from user check whether that numbers contains 11 in 
it or not.

Input : N : 6
Elements :85 66 11 80 93 88

Output : 11 is present

Input : N : 6
Elements :85 66 3 80 93 88

Output : 11 is absent

*/




#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckNumber(int Brr[],int iLength)
{
  
  int i = 0;
  int iFlag = 0;

  for(i = 0; i < iLength; i++)
  {
  	if(Brr[i] == 11)
  	{
  		iFlag = 1;
  		break;
  	}

   }

   if(iFlag == 1)
   {
     return true;
   }
   else
   {
   	return false;
   }
}


int main()
{
  int *ptr = NULL;

  int iSize = 0;
  bool bRet = 0;
  int i = 0;

 printf("\nEnter Array Size : ");
 scanf("%d",&iSize);

 ptr = (int*)malloc(sizeof(int) * iSize);

 printf("\nEnter Array Elements :\n");
 for(i = 0; i < iSize; i++)
 {
 	scanf("%d",&ptr[i]);
 }
 
 bRet = CheckNumber(ptr,iSize);

 if(bRet == true)
 {
 	printf("\n11 is present");
 }
 else
 {
 	printf("\n11 is absent");
 }
 
  printf("\n");

  free(ptr);

  return 0;

}