#include<stdio.h>

char SmallToCapital(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
	{
		return ch - 32;
	}
	
}


int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	printf("\nEnter Character : ");
	scanf("%c",&ch);
	
	cRet = SmallToCapital(ch);
	
	printf("\nCapital letter is : %c " ,cRet);
	
	printf("\n");
	
	return 0;
}