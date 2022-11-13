#include<stdio.h>

void Display( int ino )     //function defination
{
	auto int idigit = 0;    // local variable
	
	  
	  while(ino != 0)
	  {
		  
   
	     idigit = ino % 10;
     
	     printf("%d\t",idigit);
	  
	     ino = ino / 10;
	  
	  } 
	  
	
}

int main()
{	
      auto int  ival = 0;
	  
	  printf("\n Enter the number : ");
	  scanf("%d",&ival);
   
	 Display(ival);     // function call
 	
	return 0;
	
}
