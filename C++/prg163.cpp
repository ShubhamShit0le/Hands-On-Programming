#include<iostream>

using namespace std;

class Marvellous
{
   
   public :

          int Addition(int iVal1,int iVal2)
          {
          
              int iAns = 0;

              iAns = iVal1 + iVal2;  

              return iAns;

     
          }

          

};


int main()
{

   int iNo1 = 0,iNo2 = 0 , iRet = 0;

   cout<<"\nEnter first number : ";
   cin>>iNo1;

   cout<<"\nEnter Second Number : ";
   cin>>iNo2;

    Marvellous mobj;
  
   iRet =mobj.Addition(iNo1,iNo2); 

   cout<<"\nAddition is : "<<iRet<<"\n";

  

	return 0;

}