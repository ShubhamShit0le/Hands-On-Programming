/*

Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 4 iCol = 4
Output : 
A B C D
a b c d
A B C D
a b c d

*/



import java.util.*;

class Demo29
{
	 public void Display(int iRow,int iCol)
	 {
	 	int i = 0;
	 	int j = 0;
	 	char ch1 = '\0';
	 	char ch2 = '\0';
	 

         System.out.print("\n");

	 	for(i = 1; i <= iRow; i++)
	 	{
	 		for(j =1,ch1 = 'A',ch2 = 'a'; j<= iCol; j++,ch1++,ch2++)
	 		{
	 			if((i % 2) == 0)
	 			{
	 				System.out.print(ch2+"\t");
	 			}
	 			else
	 			{
	 			  System.out.print(ch1+"\t");

	 			}

	 			
	 		}
	 	  
           System.out.print("\n");	 
	 	}
	 }

}

class Program29
{
	public static void main(String[] args) 
	{
	   Scanner sobj = new Scanner(System.in);
	   Demo29 dobj = new Demo29();

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