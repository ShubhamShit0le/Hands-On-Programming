/*

Write a program which accept number from user and count frequency of 2 in it.
Input : 2395 
Output : 1
Input : 1018
Output : 0

*/


using System;

class Demo{
 
    public int CountFrequency(int iNo){
     
        int iDigit  = 0;
        int iCnt = 0;

        while(iNo != 0){

            iDigit = iNo % 10;

              if(iDigit  == 2)
              {
                 iCnt++;
              }

            iNo = iNo / 10;

        }

       return iCnt;

    }

}

class program21{
       
     public static void Main(string[] args){

            int iNo = Convert.ToInt32(Console.ReadLine());
            
            Demo dobj = new Demo();

            int iRet = dobj.CountFrequency(iNo);

            
            Console.WriteLine(iRet);
            

     }
     
}