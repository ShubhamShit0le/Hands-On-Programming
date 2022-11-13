/*.Program to print 5 times “Marvellous” on screen. */

using System;

class Program2
{
    public static void Main(string [] args){ 
          
          Demo dobj = new Demo();
          dobj.Display();
         

    }
}

class Demo
{
    public void Display(){
            
          for(int i = 0; i<5; i++)
          {
             Console.WriteLine("Marvellous");
          }

    }
}