#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int no)
{
	if((no >= '0') && (no <= '9'))
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
	char ch = '\0';
	bool bRet = false;
	
	printf("\nEnter Character : ");
	scanf("%c",&ch);
	
	bRet = CheckDigit(ch);
	
	if(bRet == true)
	{
		printf("\nIt is Digit");
	}
	else
	{
		printf("\nIt is not Digit");
	}
	
	printf("\n");
	
	return 0;
}