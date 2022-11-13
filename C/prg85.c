#include<stdio.h>

void Display(char *Brr)
{
	printf("Name is : %s ",Brr);
	
}

int main()
{

char Arr[50];

printf("\nEnter Your Name : ");
scanf("%[^'\n']s",&Arr);

Display(Arr);

return 0;
	
}