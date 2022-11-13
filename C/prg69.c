#include<stdio.h>
#include<stdlib.h>

int AddOdd(int Arr[],int iSize)
{
	int i = 0;
	int isum = 0;
	
	for(i = 0; i< iSize; i++)
	{
		if( (Arr[i] % 2 ) != 0)
		{
			isum = isum + Arr[i];
		}
	}
  return isum;	
}

int main()
{
	int iLength = 0;
	int i = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	 printf("\nEnter Array Length : ");
	 scanf("%d",&iLength);
	 
	ptr = (int*)malloc(sizeof(int) * iLength);
	
    printf("\nEnter Elements:\n");
	
	for(i = 0; i < iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("\nEntered Data : ");
	for(i = 0; i< iLength; i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	
	iRet = AddOdd(ptr,iLength);
	
	printf("\nAddition  Of Odd is : %d",iRet);
	printf("\n");
	
	
	
	free(ptr);
	
	return 0;
}