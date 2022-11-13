#include<stdio.h>
 int SmallCount(char *str)
{
int iCnt = 0;

if( str == NULL)
{
	return 0;
}

while(*str !='\0')
{ 
    if((*str>='a') &&(*str<='z'))
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

    iRet = SmallCount(Arr);
    
	printf("\nSmall Letter Count  : %d ",iRet);
 
    printf("\n");
	
   return 0;
	
}