#include<stdio.h>

int  Display( int ino )     
{
	auto int idigit = 0;    
	auto int isum = 0;
	  
	   if (ino<0)
	  {
		  ino = -ino;
	  }
	  
	  
	  while(ino != 0)
	  {
		  
   
	     idigit = ino % 10;
         isum = isum + idigit;
	    ino = ino / 10;
	  
	  } 
	  
	   return isum;
	  
	
}

int main()
{	
      auto int  ival = 0;
	  auto int iret =0;
	  
	  printf("\n Enter the number : ");
	  scanf("%d",&ival);
   
	 iret = Display(ival);     // function call
	 
	 printf("\n Addition Of Digit Is : %d",iret);
 	
	return 0;
	
}
