
#include<stdio.h>

int Addition(int ival)
{
   int isum = 0;
   int icnt = 0;
   
   if(ival<0)
   {
	   ival = -ival;
   }	   

  for(icnt =1; icnt<=ival; icnt++)
  {
    isum = isum+icnt;	
  }
     
	 return isum;   	
    
}


int main()
{
	auto int ino = 0;
	auto int iret = 0;

   printf("\nEnter Number You Want : ");
   scanf("%d",&ino);  

  iret = Addition(ino);   //Function call
  
  printf("Addition is : %d ",iret);
   
	return 0;
	
	
	
}