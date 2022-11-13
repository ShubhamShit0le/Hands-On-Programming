#include<stdio.h>
 int Count(char *str)
{
int cCount = 0;
int sCount = 0;

if( str == NULL)
{
	return 0;
}

while(*str !='\0')
{ 
    if((*str>='A') &&(*str<='Z'))
	{
       cCount++;
	}
    else if((*str>='a') &&(*str<='z'))	
	{ 
		sCount++;
	}
	str++;
}
  printf("\nCapital Letter Count is : %d ",cCount);
  printf("\nSmall Letter Count is : %d ",sCount);

}

int main()
{
  
    char Arr[10];

    printf("\nEnter Your Name : ");
    scanf("%[^'\n']s",&Arr);

    Count(Arr);
   
    printf("\n");
	
   return 0;
	
}