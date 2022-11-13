/*Accept on number from user if number is less than 10 then print 
“Hello” otherwise print “Demo”.*/

using System;

class Demo{
    
      public void Display(int iNo){
          if(iNo < 10)
          Console.WriteLine("Hello");
          else
          Console.WriteLine("Demo");
      }
}



class Program7
{
    public static void Main(string [] args){ 
          
          int iNO = Convert.ToInt32(Console.ReadLine());
    
          Demo dobj = new Demo();

          dobj.Display(iNO);

        
    }
}