/*
Write a program which accept number from user and return difference between 
summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
*/


using System;

class Demo{
  public int DifferenceOfFactOrNonFactors(int iNo){
    int iFact = 0;
    int iNonFact = 0;

    for(int i = 1; i<iNo; i++)
    {
        if(iNo % i == 0)
        iFact = iFact+i;
        else
        iNonFact = iNonFact+i;
    }

    return iFact-iNonFact;
}
}

class Program18{

    public static void Main(string[] args){

        int iNo = Convert.ToInt32(Console.ReadLine());
        Demo dobj = new Demo();

        int iRet = dobj.DifferenceOfFactOrNonFactors(iNo);

        Console.WriteLine(iRet); 
    }
}


