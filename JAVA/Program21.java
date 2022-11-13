/*

Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *

*/


import java.util.*;

class Demo21
{
	 public void Display(int iNo)
	 {
	 	int i = 0;

         System.out.print("\n");

	 	for(i = 1; i <= iNo; i++)
	 	{
	 		System.out.print("# "+i+" *"+"\t");
	 		
	 	}
	 }

}

class Program21
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo21 dobj = new Demo21();

	   int iVal = 0;
       
       System.out.print("\nEnter Number : ");
       iVal = sobj.nextInt();

	   dobj.Display(iVal);

	   System.out.print("\n");

	}
}