
#include <stdio.h>

void StrrevX(char *start)
{
 char *end = start;

 char temp;

 while(*end != '\0')
 {
    end++;
 }
 
 end--;

 while(start < end)
 {
    temp = *start;

    *start = *end;

    *end = temp;

    start++;

    end--;
 
 }

  
}

  
int main()
{
    char Arr[20];
   
    printf("\nEnter the string : ");
    scanf("%[^'\n']s",Arr);
 
   StrrevX(Arr);


    printf("\nReverse String Is : %s\n",Arr);


    printf("\n");
   
    return 0;
}
