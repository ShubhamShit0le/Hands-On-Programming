/* Accept one number from user and print that number of * on screen.*/


using System;

class Program2
{
    public static void Main(string [] args){ 
          
          int iNO = Convert.ToInt32(Console.ReadLine());
    
          Demo dobj = new Demo();

          dobj.DisplayStar(iNO);

        
    }
}

class Demo
{
    public void DisplayStar(int iNO){

         for(int i =1; i<=iNO; i++)
         Console.WriteLine("*");
        
    }
}