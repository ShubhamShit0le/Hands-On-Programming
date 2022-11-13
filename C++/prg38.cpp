/*

Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4


Output : 

*
*       *
*       *       *
*       *       *       *

*/



#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
  int i = 0;
  int j = 0;

  
  cout<<"\n";

  for(i = 1; i <= iRow; i++)
  {
   
    for(j = 1; j <= iCol; j++)
     {
       
       if(i < j)
       {
       	cout<<"\t";

       }
       else
       {
       	
       	cout<<"*"<<"\t";

       }
      

     }  

     cout<<"\n";

  }


}


int main()
{
	int iVal1 = 0;
	int iVal2 = 0;
   
     cout<<"\nEnter Rows : ";
     cin>>iVal1;


     cout<<"\nEnter Columns : ";
     cin>>iVal2;

     Display(iVal1,iVal2);

     cout<<"\n";

     return 0;

 

}
