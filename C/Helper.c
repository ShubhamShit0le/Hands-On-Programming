///////////////////////////////////////////////
//
// Function Name :  Addition
// Input:           Integer,Integer
// Output:          Integer
// Description:     It Is USed To Add 2 Number
// Author:          Shubham Namdev Shitole
// Date:            31/08/2021
//
//////////////////////////////////////////////
/*
  
 Algorithm  
  start
        Accept First Number as No1
		Accept Second Number as No2
		Perform Addition of No1 & No2
        Store The Result int iret
		Return the Value of iret
	Stop	
	
*/

#include "Header.h"
 int Addition(
             int No1,  // First Input Argument
             int No2   // Second Input Argument
			 )
 {
	 auto unsigned int iresult = 0;   // Local Variable To Store Result
	 iresult = No1 + No2;
	 
	 return iresult;         // Return The Value To The Caller
 }
 