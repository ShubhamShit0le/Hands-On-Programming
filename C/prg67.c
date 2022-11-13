#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int iSum = 0;
	int i = 0;
	float fResult = 0.0f;
	
	 for(i = 0; i<iSize; i++)
	 {
		 iSum = iSum + Arr[i];
	 }
	 
	 fResult = (float)iSum / (float)iSize;   //Explicit typecasting
	 return fResult;
}

int main()
{
	int iLength = 0;
	int i = 0;
	int *ptr = NULL;
	float fRet = 0.0f;
	
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
	
	
	fRet = Average(ptr,iLength);
	
	printf("\nAverage is : %f",fRet);
	printf("\n");
	
	
	
	free(ptr);
	
	return 0;
}