#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(int iNo,int iPos)
{
  UINT iMask = 0X00000001;
  UINT iResult = 0;

  if(iPos < 1 || iPos > 32)
  {
     return false;
  }

  iMask = iMask << (iPos -1);

  iResult = iNo & iMask;

  if (iResult == iMask)
  {
      return true;
  }
  else
  {
    return false;
  }

}

int main()
{
    UINT iVal =  0 ,iBit = 0;

    bool bRet = false;


    printf("\nEnter Number : ");
    scanf("%d",&iVal);

      printf("\nEnter Position : ");
      scanf("%d",&iBit);


    bRet = CheckBit(iVal,iBit);

    if (bRet == true) 
    {
        printf("\nBit is On");

    }
    else
    {
        printf("\nBit is off");
    }

    printf("\n");

    return 0;
}