

#include<stdio.h>

void Display(int ival)
{
	
     int i = 0;
    for(i =1; i<=ival; i++)
	{
      
	    printf("\nMARVELLOUS\n");

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