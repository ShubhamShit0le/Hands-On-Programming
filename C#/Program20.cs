/*

.Write a program which accept number from user and check whether it contains 0 
in it or not.
Input : 2395 
Output : There is no Zero
Input : 1018
Output : It Contains Zero

*/


using System;

class Demo{
 
    public bool CheckZero(int iNo){
     
        int iDigit  = 0;
        int iFlag = 0;

        while(iNo != 0){

            iDigit = iNo % 10;

              if(iDigit  == 0)
              {
                iFlag = 1;
                break;
              }

            iNo = iNo / 10;

        }

        if(iFlag == 1)
        return true;
        else
        return false;

    }

}

class program20{
       
     public static void Main(string[] args){

            int iNo = Convert.ToInt32(Console.ReadLine());
            
            Demo dobj = new Demo();

            bool bRet = dobj.CheckZero(iNo);

            if(bRet == true)
            Console.WriteLine("There Is Zero");
            else
            Console.WriteLine("There Is No Zero");
            

     }
     
}