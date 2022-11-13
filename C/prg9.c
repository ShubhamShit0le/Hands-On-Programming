#include<stdio.h>

int  CountEven( int ino )     //function defination
{
	auto int idigit = 0;    // local variable
	auto int icnt = 0;
	  
	   if (ino<0)
	  {
		  ino = -ino;
	  }
	  
	  
	  while(ino != 0)
	  {
	     idigit = ino % 10;
		
         if((idigit % 2)== 0)
		 {			 
              icnt++;
	  
	     } 
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
   
	 iret = CountEven(ival);     // function call
	 
	 printf("\n Number Of Even Digits Are : %d",iret);
 	
	return 0;
	
}
