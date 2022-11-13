#include<iostream>
using namespace std;


void DisplayR(int iNo)
{ 
	static int iCnt = 1;

	if(iCnt <= iNo )
	{
	      cout<<"\nMarvellous"<<"\n";
	      iCnt++;

	      DisplayR(iNo);
	}
    

}

int main()
{
    int iVal = 0;
  
    printf("\nEnter Number : ");
    scanf("%d",&iVal);

	DisplayR(iVal);


	return 0;

}