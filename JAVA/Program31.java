/*
Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 4 iCol = 5
Output : 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/


import java.util.*;

class Demo31
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;

         System.out.print("\n");

	 	for(i = iRow; i >= 1; i--)
	 	{
	 		for(j =1; j<= iCol; j++)
	 		{
	 			
	 			System.out.print(i+"\t");
	 		
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program31
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo31 dobj = new Demo31();

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