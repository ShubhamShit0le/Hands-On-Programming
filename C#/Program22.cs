/*

Write a program which accept number from user and count frequency of such a 
digits which are less than 6.

Input : 2395 
Output : 3
Input : 1018
Output : 3

*/


using System;

class Demo{
 
    public int CountFrequencyOfLessThan6(int iNo){
     
        int iDigit  = 0;
        int iCnt = 0;

        while(iNo != 0){

            iDigit = iNo % 10;

              if(iDigit  < 6)
              {
                 iCnt++;
              }

            iNo = iNo / 10;

        }

       return iCnt;

    }

}

class program22{
       
     public static void Main(string[] args){

            int iNo = Convert.ToInt32(Console.ReadLine());
            
            Demo dobj = new Demo();

            int iRet = dobj.CountFrequencyOfLessThan6(iNo);

            
            Console.WriteLine(iRet);
            

     }
     
}