
#include<stdio.h>

void Display(int ino)
{
   auto unsigned icnt = 0;

   for(icnt = 1; icnt<=ino; icnt++)
   {
       if(icnt % 2 == 0)
	   {
		   printf("#\t");
	   }
	   else
	   {
		   printf("*\t");
	   }
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