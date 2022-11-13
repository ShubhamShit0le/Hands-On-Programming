#include<stdio.h>
int main()
{
  int arr[5];
  int isum = 0;
  
  printf("Enter Number:\n");
  
  
  /*scanf("%d",&arr[0]);
  scanf("%d",&arr[1]);
  scanf("%d",&arr[2]);
  scanf("%d",&arr[3]);
  scanf("%d",&arr[4]);
  scanf("%d",&arr[5]);
  scanf("%d",&arr[6]); */
  
  
  for(int icnt = 0; icnt < 5; icnt++)  
  {
	  scanf("%d",&arr[icnt]);
  }
  
  //isum = arr[0] +  arr[1] + arr[2] + arr[3] + arr[4];
  
  for(int icnt = 0; icnt<5; icnt++)
  {
	 isum = isum + arr[icnt];  
  }
  printf("Addition is : %d\n " , isum);
  
	
 return 0;
 
}











