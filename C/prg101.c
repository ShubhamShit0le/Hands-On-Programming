#include<stdio.h>
 int SpaceCount(char *str)
{
int iCnt = 0;

if( str == NULL)
{
	return 0;
}

while(*str !='\0')
{ 
  if(*str == ' ')
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

    iRet = SpaceCount(Arr);
   
   printf("\nSpace Count IS : %d ",iRet);
   
   printf("\n");
	
   return 0;
	
}