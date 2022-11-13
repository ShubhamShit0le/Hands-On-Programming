
#include<stdio.h>

void Display(int ino)
{
   auto unsigned icnt = 0;

   for(icnt = ino; icnt>=1; icnt--)
   {
       printf("%d\t",icnt);
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