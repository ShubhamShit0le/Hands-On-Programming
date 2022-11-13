#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iSize)
{
	int iSum = 0;
	int i = 0;
	int iCnt = 0;
	
	for(i = 0; i< iSize; i++)
	{
		if( (Arr[i] > 10) && (Arr[i] < 20))
		{
			iCnt++;
		}
	}
  return iCnt;	
}

int main()
{
	int iLength = 0;
	int i = 0;
	int *ptr = NULL;
	int iRet = 0;
	
	 printf("\nEnter Array Length : ");
	 scanf("%d",&iLength);
	 
	ptr = (int*)malloc(sizeof(int)*iLength);
	
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
	
	
	iRet = Count(ptr,iLength);
	
	printf("\nCount is : %d",iRet);
	printf("\n");
	
	
	
	free(ptr);
	
	return 0;
}