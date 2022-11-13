#include<stdio.h>


void Display()     //function defination
{
	auto int ino = 7521;     // local variable
	auto int idigit = 0;    // local variable
	
	  
	  idigit = ino % 10;
     
	  printf("%d\n",idigit);
	  
	  ino = ino / 10;
	  
	  idigit = ino % 10;
	  
	  printf("%d\n",idigit);
	  
	  ino = ino / 10;
	  
	  idigit = ino %10;
	  
	  printf("%d\n",idigit);
	  
	  ino = ino / 10;
	  
	  idigit = ino % 10;
	  
	  printf("%d\n",idigit);
	  
	  ino = ino % 10;
	  
	  
}


int main()
{	
	 Display();     // function call
 	
	return 0;
	
}
