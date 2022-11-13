/*

Accept number from user and display below pattern.
Input : 5
Output : A B C D E

*/

#include<iostream>
using namespace std;

void Display(int iNo)
{
  int i = 0;
  char ch = 'A';

  cout<<"\n";

  for(i = 1; i<= iNo; i++)
  {
   
    cout<<ch<<"\t";
    ch++;


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