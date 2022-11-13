/*

Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16

*/


#include<iostream>
using namespace std;

void Display(int iNo)
{
  int i = 0;

  cout<<"\n";

  for(i = 1; i <= iNo; i++)
  {
   
    cout<<i*2<<"\t";
    

  }


}


int main()
{
	int iVal = 0;
   
     cout<<"\nEnter Number : ";
     cin>>iVal;

     Display(iVal);

     cout<<"\n";

     return 0;

 

}