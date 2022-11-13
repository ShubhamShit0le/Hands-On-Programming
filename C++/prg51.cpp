/*

Accept N numbers from user and display all such elements which are 
divisible by 3 and 5.
Input : N : 6
Elements :85 66 3 15 93 88
Output : 15

*/



#include<iostream>
#include<stdlib.h>
using namespace std;


void Display(int Brr[],int iLength)
{
  int i = 0;

  cout<<"\n";

  for(i = 0; i < iLength; i++)
  {
  	if((Brr[i] % 3) == 0 && (Brr[i] % 5) == 0)
  	{
  		  cout<<Brr[i]<<"\t";
  	}
  
  }
  

}

int main()
{
 
 int *ptr = NULL;
 int i = 0;
 int iSize = 0;

 cout<<"\nEnter Array Size : ";
 cin>>iSize;

 ptr = new int[iSize];

  cout<<"\nEnter Array Elements :\n";
 
 for(i = 0; i < iSize; i++)
 {
 	cin>>ptr[i];
 }

 Display(ptr,iSize);

 cout<<"\n";

 delete []ptr;

 return 0;



}

