/*

Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #

*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
  int i = 0;

  cout<<"\n";

  for(i = iNo; i >= 1; i--)
  {
   
    cout<<i<<" # \t";
    

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