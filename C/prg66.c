#include<stdio.h>
#include<stdlib.h>

int Addition(int brr[] , int ino)
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
  int *arr = NULL;
  int icnt  = 0;
  int iRet = 0;
  int isize = 0;
  
  printf("\nEnter Size Of Array : ");
  scanf("%d",&isize);
  
  arr = (int*)malloc(sizeof(int)*isize);
  
  printf("\nEnter Array Elements :\n");
  for(icnt = 0; icnt< isize; icnt++)
  {	  
      scanf("%d",&arr[icnt]);
  }
 
  iRet = Addition(arr,isize);
   
  printf("\nAddition is : %d\n " , iRet);
  
  free(arr);
 
 return 0;
 
}











