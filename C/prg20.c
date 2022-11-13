#include<stdio.h>
#include<stdbool.h>

int CheckPalindro(int ino )     //function defination
{
	auto int idigit = 0;    // local variable
	auto int irev = 0;
	auto int itemp = ino ; 
	  
	/*  if(ino < 0 )
	  {
		   ino = -ino;
	  } */
	  
	  
	  
	  while(ino != 0)
	  {
	     idigit = ino % 10;
           irev = irev * 10 +idigit;
	     ino = ino / 10;
	  
	  } 
	  
	  if (irev == itemp )
	  {
		  return true;
	  }
       else
	   {
          return false;
	   }
	  
}

int main()
{	
      auto int  ival = 0;
	  auto bool bret = 1;
	  
	  printf("\n Enter the number : ");
	  scanf("%d",&ival);
   
	 bret = CheckPalindro(ival);     // function call
	 
	 if(bret == true)
	 {
 	     printf(" \n The  Number Is palindrome\n");
	 }
     else
	 {
        printf(" \n The Number is  Not Palindrome\n");
     }		
	 
	return 0;
	
}
