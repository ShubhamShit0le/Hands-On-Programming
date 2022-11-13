#include<iostream>
using namespace std;


int SumI(int iNo)
{
  int iSum = 0;
  int iDigit = 0;

  while(iNo != 0)
  {
  	 iDigit = iNo % 10;
  	 iSum = iSum + iDigit;
  	 iNo = iNo / 10;
  }

 return iSum;

}


int SumR(int iNo)
{
	static int iSum = 0;

	if(iNo > 0)
	{
		iSum = iSum +(iNo % 10);
		iNo = iNo / 10;
		SumR(iNo);
	}
   
   return iSum;
}


int main()
{
	int iVal = 0;
	int iRet = 0;

	cout<<"\nEnter Number : ";
	cin>>iVal;

	iRet = SumR(iVal);

	cout<<"\nAddition is : "<<iRet;

	cout<<"\n";

	return 0;
}