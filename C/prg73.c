#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iSize)
{
	
	int i = 0;
	int iMin = Arr[0];
	int iMax = Arr[0];
	
	
	
	for(i = 0; i< iSize; i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
  return iMin - iMax;
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
	
	
	iRet =  Diffrence(ptr,iLength);
	
	printf("\nDiffernce Is : %d",iRet);
	printf("\n");
	
	
	
	free(ptr);
	
	return 0;
}