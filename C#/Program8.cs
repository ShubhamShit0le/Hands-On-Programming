/*Accept two numbers from user and display first number in second 
number of times.
Input : 12 5 
Output : 12 12 12 12 12 
Input : -2 3 
Output : -2 -2 -2 
Input : 21 -3 
Output : 21 21 21 


*/

using System;

class Demo{
    
      public void Display(int iNo1, int iNO2){
          int i = 0;
          while(i != iNO2)
          {
             Console.WriteLine(iNo1);
             i++;
          }

      }
}



class Program8
{
    public static void Main(string [] args){ 
          
          int iNO1 = Convert.ToInt32(Console.ReadLine());
         int iNO2 = Convert.ToInt32(Console.ReadLine());
          Demo dobj = new Demo();

          dobj.Display(iNO1,iNO2);

        
    }
}