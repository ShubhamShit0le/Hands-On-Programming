/*.Write a program which accept number from user and display its multiplication of 
factors
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)
.*/


using System;


class Demo{
    public int MultiplicationOfFactor(int iNo){

        int iMulti = 1;

        for(int i = 1; i<iNo; i++)
        {
            if(iNo % i == 0)
            iMulti = iMulti * i;
        }

        return iMulti;
    }
}

class program14{
    public static void Main(string[] args){
       
       int iNo = Convert.ToInt32(Console.ReadLine());

       Demo dobj = new Demo();

       int iRet = dobj.MultiplicationOfFactor(iNo);

       Console.WriteLine(iRet);

    }
}