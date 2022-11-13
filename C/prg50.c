/*

Accept N numbers from user and display all such elements which are 
even and divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 80

*/



#include<stdio.h>
#include<stdlib.h>

void Display(int Brr[],int iLength)
{

  int i =0;

  printf("\n");

  for(i = 0; i < iLength; i++)
  {
  	if((Brr[i] % 5) == 0 && (Brr[i] % 2) == 0)
  	{
  		printf("%d\t",Brr[i]);
  	}
  
  }


}


int main()
{

  int iSize = 0;
  int *ptr = NULL;
  int i = 0;


  printf("\nEnter Array Size  : ");
  scanf("%d",&iSize);
  ptr = (int*)malloc(iSize *sizeof(int));

  printf("\nEnter Array Elements :\n");

  for(i = 0; i < iSize; i++)
  {
  	scanf("%d",&ptr[i]);
  }


 Display(ptr,iSize);

 printf("\n");

 free(ptr);

 return 0;


}