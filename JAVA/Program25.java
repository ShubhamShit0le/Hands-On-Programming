/*

Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output : 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/



import java.util.*;

class Demo25
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;

         System.out.print("\n");

	 	for(i = 1; i <= iRow; i++)
	 	{
	 		for(j =iCol; j>= 1; j--)
	 		{
	 			System.out.print(j+"\t");
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program25
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo25 dobj = new Demo25();

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