//////////////////////////////////////////////
//
// Accept 2  Numbers From User And Perform The Addition
//
//////////////////////////////////////////////


#include "Header.h"  // User Defined Header File Inclusion

//Entry Point Function

int main()
{
	auto unsigned int ivalue1 = 0 ,ivalue2 = 0 , iret = 0;  // Local Varibles

     printf("\nEnter first Number : ");   // Acceptting The Input
     scanf("%d",&ivalue1);
      
     printf("\nEnter second Number : "); // Acceptting The Input
     scanf("%d",&ivalue2);
	 
    iret = Addition(ivalue1,ivalue2);   // Function Call
	
    printf("\nAddition is : %d\n",iret);  

	return 0;  // Return Success To os
}