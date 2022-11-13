#include<iostream>
#include<stdio.h>

using namespace std;


int StrlenI(char *str)
{
	 int iCnt = 0;

	while(*str != '\0')
	 {
	   iCnt++;
	 	str++;
	 }

	 return iCnt;
}

int StrlenR(char *str)
{
	 static int iCnt = 0;

	 if(*str != '\0')
	 {
	   iCnt++;
	 	str++;
	 	StrlenR(str);
	 }

	 return iCnt;
}


int CapR(char *str)
{ 
     static int iCnt = 0;

	 if(*str != '\0')
	 {
	   if((*str >= 'A') && (*str <= 'Z'))
	   {
	   	 iCnt++;
	   }
	   str++;

	   CapR(str);
	 }

	 return iCnt;
}




int main()
{
  char Arr[20];
  int iRet = 0;

  cout<<"\nEnter String : ";
  scanf("%[^'\n']s",Arr);

  iRet = CapR(Arr);

 cout<<"\nLength Of String is : "<<iRet;

 cout<<"\n";

}