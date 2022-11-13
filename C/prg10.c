#include<stdio.h>

int  SumEven( int ino )     //function defination
{
	auto int idigit = 0;    // local variable
	auto int isum = 0;
	  
	   if (ino<0)
	  {
		  ino = -ino;
	  }
	  
	  
	  while(ino != 0)
	  {
	     idigit = ino % 10;
		
         if((idigit % 2)== 0)
		 {			 
            
             isum = idigit + isum;
	  
	     } 
		   ino = ino /10;
	  }	   
	  
	   return isum;
	  
	
}

int main()
{	
      auto int  ival = 0;
	  auto int iret =0;
	  
	  printf("\n Enter the number : ");
	  scanf("%d",&ival);
   
	 iret = SumEven(ival);     // function call
	 
	 printf("\n Addition Of Even Digits Are : %d",iret);
 	
	return 0;
	
}
