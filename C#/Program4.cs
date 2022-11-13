/*. Accept one number and check whether it is divisible by 5 or not.*/

using System;

class Program2
{
    public static void Main(string [] args){ 
          
          int iNO = Convert.ToInt32(Console.ReadLine());
          bool bret = false;

          Demo dobj = new Demo();

          bret =  dobj.checkNumber(iNO);

          if(bret == true)
          Console.WriteLine("true");
          else
          Console.WriteLine("false");
         

    }
}

class Demo
{
    public bool checkNumber(int iNO){

        if(iNO % 5 == 0)
        return true;
        else
        return false;
        
    }
}