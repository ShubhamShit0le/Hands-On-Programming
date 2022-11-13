#include<stdio.h>

void DisplayTable()
{
	int i = 0;
	 printf("ASCCI TABLE IS \n");
	 printf("******************************\n");
	 printf("DECIMAL\tCHARACTER\n");
	 printf("******************************\n");
	for(i = 0; i<=127; i++)
	{
		printf("%d\t%c\n",i,i);
	}
	
	printf("******************************\n");
}
int main()
{
   DisplayTable();
  return 0;
  
 }
  