/*. Write a program which accept number from user and print even factors of that 
number. 
Input : 24
Output: 2 4 6 8 12
*/


using System;

class Demo{

    
      public void DisplayEvenFactor(int iNo){

           int i = 1;

           for(i = 1; i<iNo; i++)
           {

            if(iNo % i == 0 && i % 2 == 0)
            Console.WriteLine(i);
           }
        
      }
}



class Program11
{
    public static void Main(string [] args){ 
          
          int iNO = Convert.ToInt32(Console.ReadLine());
          Demo dobj = new Demo();

          dobj.DisplayEven(iNO);

         
        
    }
}