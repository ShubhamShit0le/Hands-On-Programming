import java.util.Scanner;

class Demo6
{
   public int CountEven(int iNo)
   {
     int iDigit = 0;
     int iCnt = 0;

     if(iNo < 0)
     {
       iNo = -iNo;  
    
     }

     while(iNo != 0)
     {
     	iDigit = iNo % 10;

     	if((iDigit % 2) == 0)
     	{
     		iCnt++;
     	}

     	iNo = iNo / 10;
     }

    return iCnt;


   }

}

class Program6
{
	public static void main(String arg[])
    {
	   Scanner sobj = new Scanner(System.in);

	   Demo6 dobj = new Demo6();

	   int iVal = 0;
	   int iRet = 0;

	   System.out.print("\nEnter Number : ");
	   iVal = sobj.nextInt();

	   iRet = dobj.CountEven(iVal);

	   System.out.print("\nCount of even number is : " +iRet);

	   System.out.print("\n"); 
    

	}
}
