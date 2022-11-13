#include<stdio.h>

int Addition(int *brr , int ino)
{
	int icnt = 0;
	int isum = 0;
  
      for( icnt = 0; icnt < ino; icnt++)  
  
          {  	    
               isum = isum + brr[icnt];  
              
          }

	 return isum;
}

int main()
{
  int arr[5];
  int icnt  = 0;
  int iRet = 0;
  printf("Enter Number :\n");
  for(icnt = 0; icnt< 5; icnt++)
  {	  
      scanf("%d",&arr[icnt]);
  }
 
  iRet = Addition(arr,5);
   
  printf("Addition is : %d\n " , iRet);
 
 return 0;
 
}











