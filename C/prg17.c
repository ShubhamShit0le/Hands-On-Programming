/////////////////////////////////////////////////////////////////////////
//   
//  Accept number from user and display that number of * on screen .
//  Input : 4
//  Output : * * * *
//
/////////////////////////////////////////////


#include<stdio.h>

void Display(int ino)
{
   auto unsigned icnt = 0;

   for(icnt = 0; icnt<ino; icnt ++)
   {
       printf("*\t");
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