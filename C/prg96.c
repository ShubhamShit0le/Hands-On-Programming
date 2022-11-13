#include<stdio.h>

char CapitalToSmall(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return ch + 32;
	}
	
}


int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	printf("\nEnter Character : ");
	scanf("%c",&ch);
	
	cRet = CapitalToSmall(ch);
	
	printf("\nSmall letter is : %c " ,cRet);
	
	printf("\n");
	
	return 0;
}