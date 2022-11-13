#include<iostream>
using namespace std;
typedef unsigned int UINT;



 void DisplayByte(UINT iNo)
 {
    UINT Byte1 = iNo & 0X000000ff;


    UINT Byte2 = iNo & 0x0000FF00;
    Byte2 = Byte2 >> 8;

    UINT Byte3 = iNo & 0x00ff0000;
    Byte3 = Byte3 >> 16;

    UINT Byte4 = iNo & 0xff000000;
    Byte4 = Byte4 >> 24;

    cout<<"\n";

    cout<<"Byte1 : "<<Byte1<<"\n";
    cout<<"Byte2 : "<<Byte2<<"\n";
    cout<<"Byte3 : "<<Byte3<<"\n";
    cout<<"Byte4 : "<<Byte4<<"\n";


 }

int main()
{


   UINT iVal = 0;

   cout<<"\nEnter Number : ";
   cin>>iVal;


  DisplayByte(iVal);
  

	return 0;
}