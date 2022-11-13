/*Write a program which accept number from user and display its factors in 
decreasing order.
Input : 12
Output : 6 4 3 2 1
*/

using System;


class Demo{
    public void DisplayRevrseFactor(int iNo){
        
          for(int i = iNo/2; i>=1; i--)
          {
            if(iNo % i == 0)
            Console.WriteLine(i);
          }
         

    }
}

class Program15{
    public static void Main(string[]args){

        int iNo = Convert.ToInt32(Console.ReadLine());

           Demo dobj = new Demo();

            dobj.DisplayRevrseFactor(iNo);

    
    }
}