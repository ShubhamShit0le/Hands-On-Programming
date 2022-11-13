/*
Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
*/

using System;

class Demo{
    public void DisplayNonFactor(int  iNo){

        for(int i = 1; i<=12; i++)
        {
            if(iNo % i != 0)
            Console.WriteLine(i);
            
        }


    }
}

class Program16{
    public static void Main(string[] args){

        int iNo = Convert.ToInt32(Console.ReadLine());

        Demo dobj = new Demo();

        dobj.DisplayNonFactor(iNo);

    }
}