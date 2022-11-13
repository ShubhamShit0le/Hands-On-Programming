/*

Write a program which accept number from user and display its digits in reverse 
order.
Input : 2395 
Output : 
5
9
3
2

*/

using System;

class Demo{
 
    public void DisplayDigitReverse(int iNo){
     
        int iDigit  = 0;

        while(iNo != 0){

            iDigit = iNo % 10;

            Console.WriteLine(iDigit);

            iNo = iNo / 10;

        }


    }

}

class program19{
       
     public static void Main(string[] args){

            int iNo = Convert.ToInt32(Console.ReadLine());
            
            Demo dobj = new Demo();

            dobj.DisplayDigitReverse(iNo);
            

     }
     
}