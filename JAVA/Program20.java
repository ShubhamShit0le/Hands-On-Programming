/*

Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *

*/


import java.util.*;

class Demo20
{
	 public void Display(int iNo)
	 {
	 	int i = 0;

         System.out.print("\n");

	 	for(i = 1; i <= iNo; i++)
	 	{
	 		System.out.print(i+" * \t");
	 		
	 	}
	 }

}

class Program20
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo20 dobj = new Demo20();

	   int iVal = 0;
       
       System.out.print("\nEnter Number : ");
       iVal = sobj.nextInt();

	   dobj.Display(iVal);

	   System.out.print("\n");

	}
}