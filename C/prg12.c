#include<stdio.h>
#include<stdbool.h>

 int SumFactors(int ino)
 {
	 auto int isum = 0;
	 auto int icnt = 0;


      if (ino < 0 )
       {
	      ino = -ino; 
       }	


      for(icnt = 1; icnt<=(ino/2); icnt++)
	  {
		   if((ino % icnt)== 0)
		   {
			   isum = isum + icnt ;
		   }
	  }
          return isum;
 }	  

bool CheckPerfect(int inum)
{
	auto int iret = 0;
	if(inum <0)
	{
		 inum = -inum;
	}		 
	
	iret = SumFactors(inum);
	
	if(iret == inum)
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
