#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(int iNo)
{
    UINT iResult = 0;
    UINT iMask = 0X00000840;

   iResult = iNo & iMask;

    if(iResult == iMask)
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
    UINT iVal =  0;

    UINT bRet = false;


    printf("\nEnter Number : ");
    scanf("%d",&iVal);


    bRet = CheckBit(iVal);

    if (bRet == true) 
    {
        printf("\n7'th & 12'th bit is On");

    }
    else
    {
        printf("\nbits are off");
    }

    printf("\n");

    return 0;
}