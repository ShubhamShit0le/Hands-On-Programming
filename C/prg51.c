#include<stdio.h>

void Display(int ino)
{
   auto unsigned icnt = 0;
    char ch ='\0';

   for(icnt = 1 , ch='a'; icnt<=ino; icnt++ , ch++)
   {
		   printf("%c\t",ch);
		 
   }
printf("\n");
 
}

int main()
{
	
	auto unsigned int ival = 0;
	printf("\nEnter the Number : ");
	scanf("%d",&ival);
	
	Display(ival);
	return 0;
	
}	