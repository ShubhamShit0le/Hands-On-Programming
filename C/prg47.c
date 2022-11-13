/*

Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 5 iCol = 5
Output :
1 2  3  4  5
1 2        5
1    3     5
1       4  5
1 2  3  4  5

*/



#include<stdio.h>

void Display(int iRow,int iCol)
{

int i = 0;
int j = 0;


printf("\n");

for (i = 1; i <= iRow ; i++)
{
   
  for(j = 1; j<= iCol; j++)
  {
   
    if((i == 1) ||(i == iRow) || (j == 1) || (j == iCol) || (i == j))
    {
    	printf("%d\t",j);
    }
    else
    {
    	printf("\t");
    }

  }
    
  printf("\n");

}

}


int main()
{
	int  iVal1 = 0;
	int  iVal2 = 0;

	printf("\nEnter Rows : ");
	scanf("%d",&iVal1);
  
    printf("\nEnter Columns : ");
	scanf("%d",&iVal2);


	Display(iVal1,iVal2);

	printf("\n");

	return 0;
}