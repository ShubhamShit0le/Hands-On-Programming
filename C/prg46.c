
#include<stdio.h>

void Display(int ino)
{
   auto unsigned icnt = 0;

   for(icnt = 1; icnt<=ino; icnt ++)
   {
       printf("%d*\t",icnt);
   }	   
  
}


int main()
{
	
	auto unsigned int ival = 0;
	printf("Enter the Number :\n");
	scanf("%d",&ival);
	
	Display(ival);
	return 0;
	
}	