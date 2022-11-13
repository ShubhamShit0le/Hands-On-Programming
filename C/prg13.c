#include<stdio.h>

    void DisplayTable(int ino)
{
       auto int icnt =1;
      
     if (ino < 0)
	 {
		  ino = -ino; 
	 }
	 if(ino == 0)
	 {
		 return ;
	 }	 
	 
	 for (icnt  = 1 ; icnt<=10; icnt++)
	 {
	          
			   
			   printf("%d\n",ino*icnt);
	 }	 
}	 


int main()
{
   auto int ival = 0;
 
   
   
     printf("\nEnter Number To Display Table : ");
     scanf("%d",&ival);
   
     DisplayTable(ival);
	 

   
   return 0;


}
