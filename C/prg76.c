#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[],int iSize)
{
	 int i = 0;

	 for(i=0;i<iSize; i++)
	 {
		  if(Arr[i] == 11)
		  {
			  break;
		  }
		
	 }
	  if(i == iSize)
	  {
		  return false;
	  }
	  else
	  {
		  return true;
	  }
	printf("\n");
}

int main()
{
	int iLength = 0;
	int i = 0;
	int *ptr = NULL;
	bool bRet = false;
	
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
	
	
	bRet =  CheckNumber(ptr,iLength);
	
	if(bRet == true)
	{
		printf("\nNumber is there ");
	}
	else
	{
		printf("\nNumber is not there ");
	}
	
	free(ptr);
	
	return 0;
}