/*

Write a java program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108

*/


import java.util.*;

class Demo16
{
     public int RangeEvenAdd(int iStart,int iEnd)
     {
 
         int i = iStart;
         int iSum = 0;

         while(i <= iEnd)
         {
         	 if((i % 2 ) == 0)
         	 {

         	   iSum = iSum + i;

         	}

         	i++;
         }
       
         return iSum; 
     }

}



class Program16
{
	public static void main(String[] args) 
	{
	
      Scanner sobj = new Scanner(System.in);

      Demo16 dobj = new Demo16();

      int iVal1 = 0;
      int iVal2 = 0;
      int iRet = 0;

      System.out.print("\nEnter Starting Point : ");
      iVal1 = sobj.nextInt();

      System.out.print("\nEnter Ending Point : ");
      iVal2 = sobj.nextInt();

     iRet = dobj.RangeEvenAdd(iVal1,iVal2);
     
     if(iRet < 0)
      {
         	iRet = -iRet;
      }

      System.out.print("\nAddition is : "+iRet);

      System.out.print("\n");



	}
}
