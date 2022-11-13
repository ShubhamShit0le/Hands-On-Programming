#include<iostream>
using namespace std;

class Array
{
  public : 

           int AdditionI(int Brr[],int iSize)
           {
              int i = 0;
              int iSum = 0;
                
               for(i = 0; i< iSize; i++)
               {
                    
                  iSum = Brr[i] + iSum;  

               } 

               return iSum;

           }  

           int AdditionW(int Brr[],int iSize)
           {
              int i = 0;
              int iSum = 0;
                
               while( i < iSize)
               {
               	 iSum = Brr[i] + iSum;
               	 i++;
               }

               return iSum;

           }  


           int AdditionR(int Brr[], int isize)
           {
              static int i = 0;
              static int iSum = 0;

               if(i < isize)
               {
               	  iSum = Brr[i] + iSum;
               	  i++;
                  AdditionR(Brr,isize);


               }

               return iSum;

           }
 
     

};


int main()
{
  int iLength = 0;
  int *ptr = NULL;
  int i = 0;
  int iRet = 0;

  Array obj;

  cout<<"\nEnter Size Of Array : ";
  cin>> iLength;

  ptr = new int[iLength];

  cout<<"\nEnter the array elements :\n";
  
   for(i = 0; i < iLength; i++)
   {

   	cin>>ptr[i];
   
   }


  iRet = obj.AdditionR(ptr,iLength);

  cout<<"\nAddition is : "<<iRet;

  cout<<"\n";
  

	return 0;
}