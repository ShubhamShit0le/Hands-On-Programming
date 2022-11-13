
#include <stdio.h>
#include<stdbool.h>


bool CheckPallindrome(char *str)
{
    char *end = NULL;
    bool flag = true;

   end = str;
  
  while(*end != '\0')
  {
    end++;

  }
  end--;

  while(str < end)
  {
    if(*str != *end)
    {
        flag = false;
        break;
    }

    str++;
    end--;
  }

  return flag;

   
}

  
int main()
{
    char Arr[20];
    bool bRet = false; 

    printf("\nEnter the string :");
    scanf("%[^'\n']s",Arr);
 
   bRet = CheckPallindrome(Arr);

   if (bRet == true)
   {
       printf("\nString is pallindrome");

   }
   else
   {
    printf("\nString is not pallindrome");
   }

    printf("\n");
   
    return 0;
}
