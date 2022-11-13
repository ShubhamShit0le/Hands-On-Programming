import java.util.Scanner;

class Demo5
{
   public int CountDigit(int iNo)
   {
      int iDigit = 0;
      int iCnt = 0;

      if(iNo < 0)
      {
      	iNo = -iNo;
      }

      if(iNo == 0)
      {
      	return 1;
      }

      while(iNo != 0)
      {
      	iDigit = iNo % 10;

      	iCnt++;

      	iNo = iNo / 10;

      }

      return iCnt;
 

   }



}

class Program5
{
	public static void main(String arg[])
    {
	  
	    Scanner sobj = new Scanner(System.in);

	    Demo5 dobj = new Demo5();

	    int iVal = 0;
	    int iRet = 0;

	     System.out.print("\nEnter Number : ");
	     iVal = sobj.nextInt();

	     iRet = dobj.CountDigit(iVal);

	     System.out.print("\nNumber of digits are : "+iRet);
    
         System.out.print("\n");   

	}
}