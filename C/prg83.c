#include<stdio.h>

int main()
{

char Arr[20];

printf("\nEnter Your Name : ");
scanf("%[^'\n']s",&Arr);

printf("\nYour Entered Name Is : %s",Arr);

return 0;
	
}