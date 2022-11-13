#include<stdio.h>
#include<stdbool.h>

bool checkEven(int ival)
{
	if((ival % 2) == 0)
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
   int ino = 0;
   bool bret = false;

    printf("\nEnter the number : ");
    scanf("%d",&ino);

     bret = checkEven(ino);
   
    if(bret == true)
    {
		printf("%d Is even number ",ino);
	}
     else
	 {
        printf("%d is not even number ",ino);
     }

      return 0;
}	  
	
   	
  	 
     