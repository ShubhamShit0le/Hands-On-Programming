import java.util.*;

class Program119
{
	public static void main(String args[])

   {
		Scanner sobj = new Scanner(System.in);

    	int iNo1 = 0 , iNo2 = 0, iAns = 0;

    	System.out.print("\nEnter First Number : ");
    	iNo1 = sobj.nextInt();

    	System.out.print("\nEnter Second Number : ");
         iNo2 = sobj.nextInt();

         Marvel mobj = new Marvel();

        iAns = mobj.Addition(iNo1,iNo2);

         System.out.print("\nAddition is : "+iAns);

         System.out.print("\n");

	}
}


class Marvel
{


	public  int Addition(int i , int j)
    {
      int iRet = 0;

      iRet = i + j;

      return iRet;
    

    }
}