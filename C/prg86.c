#include<stdio.h>

void Display(char *Brr)
{
	printf("Name is : %c\n ",*Brr);
	Brr++;
	printf("Name is : %c\n ",*Brr);
	Brr++;
	printf("Name is : %c\n ",*Brr);
	Brr++;
	printf("Name is : %c\n ",*Brr);
	Brr++;
	printf("Name is : %c\n ",*Brr);
	Brr++;
}

int main()
{

char Arr[10];

printf("\nEnter Your Name : ");
scanf("%[^'\n']s",&Arr);

Display(Arr);

return 0;
	
}