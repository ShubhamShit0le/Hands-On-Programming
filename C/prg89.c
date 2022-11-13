#include<stdio.h>
typedef unsigned UINT;

UINT int strlenX(char *str)
{
int iCnt = 0;

if( str == NULL)
{
	return 0;
}

while(*str !='\0')
{
	iCnt++;
	str++;
}
return iCnt;
}

int main()
{
    UINT iRet = 0;
    char Arr[10];

    printf("\nEnter Your Name : ");
    scanf("%[^'\n']s",&Arr);

    iRet = strlenX(Arr);
    
	printf("\nLength Of String Is : %u ",iRet);
 
    printf("\n");
	
   return 0;
	
}