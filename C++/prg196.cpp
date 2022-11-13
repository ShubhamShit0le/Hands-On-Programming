#include<iostream>
using namespace std;


int FactorialI(int iNo)
{
  int iFact = 1;

  while(iNo != 0)
  {
  	 
  	 iFact = iFact * iNo;
  	 iNo--;
  }

 return iFact;

}


int FactorialR(int iNo)
{

  static int iFact = 1;

	if(iNo > 0)
	{
		iFact = iFact *iNo ;
		iNo--;
		FactorialR(iNo);
	}
   
   return iFact;
}


int main()
{
	int iVal = 0;
	int iRet = 0;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	iRet = FactorialR(iVal);

	cout<<"\nFactorial is : "<<iRet;

	cout<<"\n";

	return 0;
}