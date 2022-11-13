/*
Accept on character from user and check whether that character is vowel 
(a,e,i,o,u) or not. 
Input : E Output : TRUE 
Input : d Output : FALSE
*/


using System;

class Demo{
    
      public bool CheckVowel(char cVal){
         
         if((cVal == 'a') || (cVal == 'i') || (cVal == 'e') || (cVal == 'o') || (cVal == 'u'))
         return true;
         else
         return false;
        
      }
}



class Program13
{
    public static void Main(string [] args){ 
          
          char cVal = Convert.ToChar(Console.ReadLine());
          Demo dobj = new Demo();

          bool bRet = false;

          bRet = dobj.CheckVowel(cVal);

          if(bRet == true)
          Console.WriteLine("it is vowel");
          else
          Console.WriteLine("it is not vowel");

        
    }
}