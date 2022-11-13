#include<stdio.h>

int Reverce(int ino )     //function defination
{
	auto int idigit = 0;    // local variable
	auto int irev = 0;
	  
	/*  if(ino < 0 )
	  {
		   ino = -ino;
	  }*/
	  
	  
	  
	  while(ino != 0)
	  {
		  
   
	     idigit = ino % 10;
          irev = irev * 10 +idigit;
	     ino = ino / 10;
	  
	  } 
	  
	  return irev;
	  
	
}

int main()
{	
      auto int  ival = 0;
	  auto int iret = 0;
	  
	  printf("\n Enter the number : ");
	  scanf("%d",&ival);
   
	 iret = Reverce(ival);     // function call
 	 printf(" The Reverce Number Is : %d " , iret);
	 
	return 0;
	
}
