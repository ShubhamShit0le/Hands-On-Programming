#include<stdio.h>

void Display(int ino)
{
   auto unsigned icnt = 0;
    char ch ='a';

   for(icnt = 1; icnt<=ino; icnt++)
   {
		   printf("%c\t",ch);
		   ch++;
   }
 
}

int main()
{
	
	auto unsigned int ival = 0;
	printf("Enter the Number : ");
	scanf("%d",&ival);
	
	Display(ival);
	return 0;
	
}	