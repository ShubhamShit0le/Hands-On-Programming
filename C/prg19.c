
#include<stdio.h>

void DisplayFactor(int ival)
{
	 int icnt  = 0;
	 
	 if (ival < 0)
	 {
		 ival = - ival;
	 }	 
	 
	 for(icnt = 1; icnt <= (ival / 2) ; icnt++)  // O(N/2)
	 {
		  if((ival % icnt) == 0)
		  {
			   printf( "%d\n",icnt);
			         
		  }	   
	 }
}	 


int main()
{
	int ino = 0;
	
	printf(" enter the number : ");
	scanf("%d",&ino);
	
	DisplayFactor(ino); // function call
	
	return 0;
  	
	
	
}	