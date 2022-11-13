/* .Write a program which accept one number from user and print that number of 
even numbers on screen. 
Input : 7 
Output: 2 4 6 8 10 12 14
*/


using System;

class Demo{

        static int i = 1;
    
      public void DisplayEven(int iNo){

           
          if(i != iNo)
          {
            Console.WriteLine(2*i);
            i++;
            DisplayEven(iNo);
            
          }
        
      }
}



class Program10
{
    public static void Main(string [] args){ 
          
          int iNO = Convert.ToInt32(Console.ReadLine());
          Demo dobj = new Demo();

          dobj.DisplayEven(iNO);

         
        
    }
}