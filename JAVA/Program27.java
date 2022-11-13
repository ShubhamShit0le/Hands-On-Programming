/*

Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

*/


import java.util.*;

class Demo27
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;

         System.out.print("\n");

	 	for(i = 1; i <= iRow; i++)
	 	{
	 		for(j =1; j<= iCol; j++)
	 		{
	 			
	 			System.out.print(i+"\t");
	 		
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program27
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo27 dobj = new Demo27();

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