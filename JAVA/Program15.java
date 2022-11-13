/*

Write a java program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212

*/

import java.util.*;

class Demo15
{
     public int RangeAddition(int iStart,int iEnd)
     {
 
         int i = iStart;
         int iSum = 0;

         while(i <= iEnd)
         {
         	iSum = iSum + i;
         	i++;
         }
        
         return iSum;
     }
 }

         
class Program15
{
	public static void main(String[] args)
    {	
      Scanner sobj = new Scanner(System.in);

      Demo15 dobj = new Demo15();

      int iVal1 = 0;
      int iVal2 = 0;
      int iRet = 0;

      System.out.print("\nEnter Starting Point : ");
      iVal1 = sobj.nextInt();

      System.out.print("\nEnter Ending Point : ");
      iVal2 = sobj.nextInt();

      iRet = dobj.RangeAddition(iVal1,iVal2);

      if(iRet < 0)
      {
      	iRet = -iRet;
      }

      System.out.print("\nAddition is : "+iRet);

      System.out.print("\n");



	}
}