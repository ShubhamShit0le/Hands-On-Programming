#include<stdio.h>

void DisplayBinary(int iNo)
{
    
  int iDigit = 0;
  
    while(iNo != 0)
    {
    	iDigit = iNo % 2;

    	printf("%d\t",iDigit);

    	iNo = iNo / 2;
    }

}

int main()
{
 int iVal = 0;

 printf("\nEnter Number : ");
 scanf("%d",&iVal);


 DisplayBinary(iVal);

 printf("\n");

	return 0;
}