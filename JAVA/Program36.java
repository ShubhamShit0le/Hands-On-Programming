
/*

Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 5


Output : 
* * * * *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* * * * *

*/


import java.util.*;

class Demo36
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
	 			
	 			 if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
	 			 {
	 			 	System.out.print("*"+"\t");
	 			 }
	 			 else
	 			 {
	 			 	System.out.print("@"+"\t");
	 			 }
	 		
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program36
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo36 dobj = new Demo36();

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