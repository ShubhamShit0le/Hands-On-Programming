/*

Write a C++ program which accept range from user and display all even numbers in
between that range.

Input : 23 35
Output : 24 26 28 30 32 34

*/



import java.util.*;

class Demo14
{
     public void DisplayEven(int iStart,int iEnd)
     {
 
         int i = iStart;

         System.out.print("\n");

         while(i <= iEnd)
         {
         	 if((i % 2 ) == 0)
         	 {

         	   System.out.print(i+"\t");

         	}

         	i++;
         }




     }




}



class Program14
{
	public static void main(String[] args) 
	{
	
      Scanner sobj = new Scanner(System.in);

      Demo14 dobj = new Demo14();

      int iVal1 = 0;
      int iVal2 = 0;

      System.out.print("\nEnter Starting Point : ");
      iVal1 = sobj.nextInt();

      System.out.print("\nEnter Ending Point : ");
      iVal2 = sobj.nextInt();

      dobj.DisplayEven(iVal1,iVal2);

      System.out.print("\n");



	}
}