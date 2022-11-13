/*Accept number from user and check whether number is even or odd. */



using System;

class Demo{
    
      public bool CheckEvenOdd(int iNo){
         
         if(iNo % 2 == 0)
         return true;
         else
         return false;
        
      }
}



class Program9
{
    public static void Main(string [] args){ 
          
          int iNO = Convert.ToInt32(Console.ReadLine());
          Demo dobj = new Demo();

          bool bRet = false;

          bRet = dobj.CheckEvenOdd(iNO);

          if(bRet == true)
          Console.WriteLine("Even");
          else
          Console.WriteLine("Odd");

        
    }
}