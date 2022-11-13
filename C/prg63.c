#include<stdio.h>
int main()
{
  int arr[5];
  int isum = 0;
  
  printf("Enter Number:\n"); 
  
  for(int icnt = 0; icnt < 5; icnt++)  
  {
	  scanf("%d",&arr[icnt]);
	  
    isum = isum + arr[icnt];  
   
  }
   
   printf("Addition is : %d\n " , isum);
 
 return 0;
 
}











