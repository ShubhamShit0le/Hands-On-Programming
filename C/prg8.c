#include<stdio.h>

int  Display( int ino )     //function defination
{
	auto int idigit = 0;    // local variable
	auto int icnt = 0;
	  
	  if (ino<0)
	  {
		  ino = -ino;
	  }
	  
	  if (ino == 0)
	  {
		  return 1;
	  }
	  
	  while(ino != 0)
	  {
		  
   
	     idigit = ino % 10;
          icnt++;
	     ino = ino /10;
	  
	  } 
	  
	   return icnt;
	  
	
}

int main()
{	
      auto int  ival = 0;
	  auto int iret =0;
	  
	  printf("\n Enter the number : ");
	  scanf("%d",&ival);
   
	 iret = Display(ival);     // function call
	 
	 printf("\n Number of Digits Are : %d",iret);
 	
	return 0;
	
}
