#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
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
	
	bRet = CheckCapital(ch);
	
	if(bRet == true)
	{
		printf("\nIt is Capital");
	}
	else
	{
		printf("\nIt is not capital");
	}
	
	printf("\n");
	
	return 0;
}