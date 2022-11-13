/*

Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *

*/


#include<iostream>
using namespace std;

void Display(int iNo)
{
  int i = 0;

  cout<<"\n";

  for(i = 1; i <= iNo; i++)
  {
   
    cout<<"# "<<i<<" *"<<"\t";
    

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