/*

Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16

*/


import java.util.*;

class Demo22
{
	 public void Display(int iNo)
	 {
	 	int i = 0;

         System.out.print("\n");

	 	for(i = 1; i <= iNo; i++)
	 	{
	 		System.out.print(i*2+"\t");
	 		
	 	}
	 }

}

class Program22
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo22 dobj = new Demo22();

	   int iVal = 0;
       
       System.out.print("\nEnter Number : ");
       iVal = sobj.nextInt();

	   dobj.Display(iVal);

	   System.out.print("\n");

	}
}