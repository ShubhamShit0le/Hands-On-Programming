#include<stdio.h>
#include<stdbool.h>
  

bool CheckPerfect(int inum)
{
	auto int icnt = 0;
	auto int isum = 0;
	
	if(inum <0)
	{
		 inum = -inum;
	}		 
	
      for(icnt = 1; icnt<=(inum /2); icnt++)
	  {  
	       if((inum % icnt)==0)
		   {
		   
	       isum = isum +icnt;
	     }	 
	  }
	
	if(isum == inum)
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
   auto int ival = 0;
   auto bool bret = false;
   
   
   printf("\nEnter Number : ");
   scanf("%d",&ival);
   
     bret = CheckPerfect(ival);
	 
	 if(bret == true)
	 {
		  printf("\nNumber Is Perfect ");
	 }
    else
	{
         printf("\nNumber Is Not Perfect ");
    }
	
   
   return 0;


}
