/*Program to print 5 to 1 numbers on screen.*/

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
            
          for(int i = 5; i>=1; i--)
          {
             Console.WriteLine(i);
          }

    }
}