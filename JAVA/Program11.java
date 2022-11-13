import java.util.*;


class Demo11
{
	 public boolean CheckPrime(int iNo)
	 { 
	 	int iCnt = 0;
	 	int iFlag = 0;

	 	if(iNo < 0)
	 	{
	 		iNo = -iNo;
	 	}

	 	if(iNo == 0 || iNo == 1)
	 	{
	 		return false;

	 	}

	 	for(iCnt = 2; iCnt <= iNo/2; iCnt++)
	 	{
	 		if(iNo % iCnt == 0)
	 		{
	 			iFlag = 1;
	 			break;
	 		}
	 	}

	 	if(iFlag == 0)
	 	{
	 		return true;
	 	}
	 	else
	 	{
	 		return false;

	 	}

	 }
}


class Program11
{
	public static void main(String[] args) 
	{
      Scanner sobj = new Scanner(System.in);
      Demo11 dobj = new Demo11();

      int iVal = 0;
      boolean bRet = false;

      System.out.print("\nEnter Number : ");
      iVal = sobj.nextInt();


      bRet = dobj.CheckPrime(iVal);

      if(bRet == true)
      {
      	System.out.print("\nNumber Is prime");
      }
      else
      {
      	System.out.print("\nNumber is not prime");
      }
		
    	System.out.print("\n");


	}
}