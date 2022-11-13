#include<stdio.h>

char CharToggle(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return ch + 32;
	}
	
	else if((ch >= 'a') && (ch <= 'z'))
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
	
	cRet = CharToggle(ch);
	
	printf("\nToggled letter is : %c " ,cRet);
	
	printf("\n");
	
	return 0;
}