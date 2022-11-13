/*.Write a program which accept number from user and return summation of all its 
non factors.
Input : 12
Output : 50
*/

using System;


class Demo{
    
    public int SummationOfFactor(int iNo){

        int iSum= 0;

        for(int i = 1; i<iNo; i++)
        {
            if(iNo % i != 0)
            iSum = iSum+i;
        }

        return iSum;
    }
}

class Program17{
    public static void Main(string[] args){

        int iNo = Convert.ToInt32(Console.ReadLine());

        Demo dobj = new Demo();

        int iRet = dobj.SummationOfFactor(iNo);

        Console.WriteLine(iRet);

    }
}