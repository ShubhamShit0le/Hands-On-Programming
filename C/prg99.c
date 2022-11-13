#include<stdio.h>
 int CapitalCount(char *str)
{
int iCnt = 0;

if( str == NULL)
{
	return 0;
}

while(*str !='\0')
{ 
    if((*str>='A') &&(*str<='Z'))
	{
       iCnt++;
	}	   
	str++;
}
return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[10];

    printf("\nEnter Your Name : ");
    scanf("%[^'\n']s",&Arr);

    iRet = CapitalCount(Arr);
    
	printf("\nCapital Letter Count  : %d ",iRet);
 
    printf("\n");
	
   return 0;
	
}