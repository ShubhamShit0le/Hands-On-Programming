#include<stdio.h>

    int DisplayTable(int ino ,int ival)
{
       auto int imulti = 1;
	   auto int icnt = 0;
      
     if (ino < 0)
	 {
		  ino = -ino; 
	 }
		
     if (ival < 0)
	 {
		  ival = -ival; 
	 }
	 
	 for (icnt  = 1  ; icnt<= ival; icnt++)
	 {
	          
			 imulti = imulti * ino;
			  
	 }	 
	  return imulti;
}	 


int main()
{
     auto int ival1 = 0;
	 auto int ival2 = 0;
	 auto int iret = 0;
 
   
   
     printf("\nEnter  Number  : ");
     scanf("%d",&ival1);
	 
	 
     printf("\nEnter Power You Want : ");
     scanf("%d",&ival2);
	 
	 
   
     iret = DisplayTable(ival1,ival2);
	 
	 printf("\nPower Is : %d ",iret);
	 

   
   return 0;


}
