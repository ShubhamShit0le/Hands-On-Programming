/*

Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 3 iCol = 4
Output : 
1 2 3 4
5 6 7 8
9 10 11 12

*/


import java.util.*;

class Demo32
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;
	 	int k = 1;

         System.out.print("\n");

	 	for(i = 1; i <= iRow; i++)
	 	{
	 		for(j =1; j<= iCol; j++)
	 		{
	 			
	 			System.out.print(k+"\t");
	 			k++;
	 		
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program32
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo32 dobj = new Demo32();

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