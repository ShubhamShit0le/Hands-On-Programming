import java.util.*;


class Program118
{
	
    public static int Addition(int i , int j)
    {
      int iRet = 0;

      iRet = i + j;

      return iRet;
    

    }

     public static void main(String arg[])
    {
    	Scanner sobj = new Scanner(System.in);

    	int iNo1 = 0 , iNo2 = 0, iAns = 0;

    	System.out.print("\nEnter First Number : ");
    	iNo1 = sobj.nextInt();

    	System.out.print("\nEnter Second Number : ");
         iNo2 = sobj.nextInt();

        iAns = Addition(iNo1,iNo2);

         System.out.print("\nAddition is : "+iAns);

         System.out.print("\n");

		
	}
}