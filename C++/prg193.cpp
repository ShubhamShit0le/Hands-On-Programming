#include<iostream>
using namespace std;

// void DisplayI()
// {
// 	int i = 0;

// 	for(i = 1; i<=4; i++)
// 	{
// 	      cout<<"\nMarvellous"<<"\n";
// 	}

// }


void DisplayR()
{ 
	static int iCnt = 1;

	if(iCnt <=4 )
	{
	      cout<<"\nMarvellous"<<"\n";
	      iCnt++;

	      DisplayR();
	}
    

}

int main()
{

	DisplayR();


	return 0;

}