/*

Accept number from user and display below pattern.
Input : 5
Output : A B C D E

*/

import java.util.*;

class Demo18
{
	 public void Display(int iNo)
	 {
	 	int i = 0;
	 	char ch = 'A';

         System.out.print("\n");

	 	for(i = 1; i<= iNo; i++)
	 	{
	 		System.out.print(ch+"\t");
	 		ch++;
	 	}
	 }

}

class Program18
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo18 dobj = new Demo18();

	   int iVal = 0;
       
       System.out.print("\nEnter Number : ");
       iVal = sobj.nextInt();

	   dobj.Display(iVal);

	   System.out.print("\n");

	}
}