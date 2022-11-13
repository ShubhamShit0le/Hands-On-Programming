#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
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
	
	printf("\nEnter character : ");
	scanf("%c",&ch);
	
	bRet = CheckSmall(ch);
	
	if(bRet == true)
	{
		printf("\nIt is small");
	}
	else
	{
		printf("\nIt is not small");
	}
	
	printf("\n");
	
	return 0;
}