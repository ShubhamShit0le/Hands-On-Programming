
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckFirstOccurnce(int Arr[], int iLength , int iNo)
{
   int i = 0;

	for(i = 0; i <iLength; i++)
	{
		if(Arr[i] == iNo)
		{
           break;
		}
		
	}
	if	(i == iLength)
	{
		return -1;
	}
	else
	{
		return i;
	}
	
	
}

int main()
{
	int i = 0;
	int iSize = 0;
	int *ptr  = NULL;
	int iRet = 0;
	int iVal = 0;
	
	
	printf("\nEnter Array Size : ");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter Elements Of Array:\n");
	for(i =0; i < iSize; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nEnter the element to search : ");
	scanf("%d",&iVal);
	
	iRet = CheckFirstOccurnce(ptr,iSize,iVal);
	
	  if(iRet == -1)
	  {
		  printf("\nThere is no such number");
	  }
	  else
	  {
		  printf("\nNumber is there at index : %d",iRet);
	  }
	  
      printf("\n");
     
	free(ptr);
	
	return 0;
}
