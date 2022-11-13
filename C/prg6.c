#include<stdio.h>
typedef unsigned long int UINT ;


UINT factorial(int ival)
{
	
	 UINT ifact = 1;
	 int icnt =0;
	 
	 if (ival < 0)   ///updator
	 {
		  ival = -ival;
	 }
	   
       icnt =1;
	   
	  while(icnt <= ival)
	  {
		  ifact = ifact * icnt ;
		  icnt++;
	  }
       
	    return ifact;
}



 int main()
 {
	 
    int ino = 0;
	UINT iret = 0;
	
	printf("\n Enter number : ");
	scanf("%d",&ino);
	
	iret = factorial(ino);
	
	printf(" Factorial is : %ld" , iret);
	
	return 0;
	
 }	