import java.util.Scanner;

class Demo3
{

   public int AddEven(int iNo)
   {
     int iDigit = 0;
     int iAdd = 0;
   
       if(iNo < 0)
       {
       	  
          iNo = -iNo;

       }
   
       while(iNo != 0)
       {

       	  iDigit = iNo % 10;

       	  if((iDigit % 2) == 0)
       	  {
         
            iAdd = iAdd + iDigit;

       	  }

       	  iNo = iNo / 10;
       }

     return iAdd;

   }


}

class Program3
{
	public static void main(String arg[])
    {

	  Scanner sobj = new Scanner(System.in);
	  Demo3 dobj = new Demo3();

	  int iVal = 0;
	  int iRet = 0;

      System.out.print("\nEnter Number : ");
      iVal = sobj.nextInt();

      iRet = dobj.AddEven(iVal);

      System.out.print("\nAddition of even number is : " +iRet);
      
      System.out.print("\n");

	}

}