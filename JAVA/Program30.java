/*

Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 3 iCol = 5
Output : 
A A A A A
B B B B B
C C C C C

*/


import java.util.*;

class Demo30
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;
	 	char ch = '\0';

         System.out.print("\n");

	 	for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
	 	{
	 		for(j =1; j<= iCol; j++)
	 		{
	 			
	 			System.out.print(ch+"\t");
	 		
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program30
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo30 dobj = new Demo30();

	   int iVal1 = 0;
	   int iVal2 = 0;
       
       System.out.print("\nEnter Rows : ");
       iVal1 = sobj.nextInt();

        System.out.print("\nEnter Columns : ");
        iVal2 = sobj.nextInt();

	   dobj.Display(iVal1,iVal2);

	   System.out.print("\n");

	}
}