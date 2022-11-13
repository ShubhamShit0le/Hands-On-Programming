/*
Accept one character from user and convert case of that character. 
Input : a Output : A 
Input : D Output : d
*/


using System;
using System.Text;

class Demo{

    
      public void ConvertCase(char cVal){
               
               if(cVal >='A' && cVal <= 'Z')
               Console.WriteLine(char.ToLower(cVal));
               else
               Console.WriteLine(char.ToUpper(cVal));        
      }
}



class Program12
{
    public static void Main(string [] args){ 
          
          char cVal = Convert.ToChar(Console.ReadLine());
          Demo dobj = new Demo();

          dobj.ConvertCase(cVal);

         
        
    }
}