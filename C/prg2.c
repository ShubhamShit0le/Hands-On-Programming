

#include<stdio.h>

void Display(int ival)
{
	
     int i = 0;
	 
	 if(ival<0)      //input updater
	 {
		 ival=-ival;
     }
	 
    for(i =1; i<=ival; i++)
	{
      
	    printf("%d\n",i);
		 

    }


}


int main()
{
	auto int ino = 0;

   printf("\nEnter Number You Want : ");
   scanf("%d",&ino);  

   Display(ino);   //Function call
   
	return 0;
	
	
	
}