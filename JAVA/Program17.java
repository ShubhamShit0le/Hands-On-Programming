/*

Write a java program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23

*/


import java.util.*;

class Demo17
{
     public void DisplayRangeRev(int iStart,int iEnd)
     {
 
         int i = iEnd;

         System.out.print("\n");

         while(i >= iStart)
         {
         	System.out.print(i+"\t");

         	i--;
         }

     }

}



class Program17
{
	public static void main(String[] args) 
	{
	
      Scanner sobj = new Scanner(System.in);

      Demo17 dobj = new Demo17();

      int iVal1 = 0;
      int iVal2 = 0;

      System.out.print("\nEnter Starting Point : ");
      iVal1 = sobj.nextInt();

      System.out.print("\nEnter Ending Point : ");
      iVal2 = sobj.nextInt();

      dobj.DisplayRangeRev(iVal1,iVal2);

      System.out.print("\n");



	}
}