
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Check(int Arr[], int iLength , int iNo)
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
		return false;
	}
	else
	{
		return true;
	}
	
	
}

int main()
{
	int i = 0;
	int iSize = 0;
	int *ptr  = NULL;
	bool bRet = false;
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
	
	bRet = Check(ptr,iSize,iVal);
	  
	 if(bRet == true)
	 {
		 printf("\nNumber is there ");
	 }
	 else
	 {
		 printf("\nNumber is not there");
	 }
   
      printf("\n");
     
	free(ptr);
	
	return 0;
}
	