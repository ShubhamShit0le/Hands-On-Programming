/*

Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
A B C D
A B C D
A B C D

*/


import java.util.*;

class Demo28
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;
	 	char ch = '\0';

         System.out.print("\n");

	 	for(i = 1; i <= iRow; i++)
	 	{
	 		for(j =1,ch = 'A'; j<= iCol; j++,ch++)
	 		{
	 			
	 			System.out.print(ch+"\t");
	 		
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program28
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo28 dobj = new Demo28();

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