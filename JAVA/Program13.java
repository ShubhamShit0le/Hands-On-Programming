/*

Write a java program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35

*/



import java.util.*;

class Demo13
{
     public void DisplayRange(int iStart,int iEnd)
     {
 
         int i = iStart;

         System.out.print("\n");

         while(i <= iEnd)
         {
         	System.out.print(i+"\t");

         	i++;
         }




     }




}



class Program13
{
	public static void main(String[] args) 
	{
	
      Scanner sobj = new Scanner(System.in);

      Demo13 dobj = new Demo13();

      int iVal1 = 0;
      int iVal2 = 0;

      System.out.print("\nEnter Starting Point : ");
      iVal1 = sobj.nextInt();

      System.out.print("\nEnter Ending Point : ");
      iVal2 = sobj.nextInt();

      dobj.DisplayRange(iVal1,iVal2);

      System.out.print("\n");



	}
}