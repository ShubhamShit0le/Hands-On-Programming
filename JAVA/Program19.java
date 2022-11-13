/*

Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #

*/


import java.util.*;

class Demo19
{
	 public void Display(int iNo)
	 {
	 	int i = 0;

         System.out.print("\n");

	 	for(i = iNo; i >= 1; i--)
	 	{
	 		System.out.print(i+" # \t");
	 		
	 	}
	 }

}

class Program19
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo19 dobj = new Demo19();

	   int iVal = 0;
       
       System.out.print("\nEnter Number : ");
       iVal = sobj.nextInt();

	   dobj.Display(iVal);

	   System.out.print("\n");

	}
}