/*Program to divide two numbers */

using System;

class Program2
{
    public static void Main(string [] args){ 
          
          int iNo1 = 0;
          int iNo2 = 0;
          Console.WriteLine("Enter First Number : ");

          iNo1 =Convert.ToInt32(Console.ReadLine());

          Console.WriteLine("Enter Second Number : ");

          iNo2 = Convert.ToInt32(Console.ReadLine());

          Demo dobj = new Demo();

          int IRet  = dobj.DivideTwoNumber(iNo1,iNo2);

          Console.WriteLine("Ans Is : "+IRet);


    }
}

class Demo
{
    public int DivideTwoNumber(int iNo1,int iNo2){
            
          return iNo1/iNo2;

    }
}