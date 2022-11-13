import java.util.*;

class Program120
{
	public static void main(String arg[]) 
	{
	  Scanner sobj = new Scanner(System.in);
     
        int iNo = 0;
        boolean bRet = false;

        System.out.print("\nEnter NUmber : ");
        iNo = sobj.nextInt();

        Marvel mobj = new Marvel();

        bRet = mobj.Prime(iNo);

        if(bRet == true)
        {
        	System.out.print("\nNumber Is Prime");
        }
        else
        {
        	System.out.print("\nNumber Is Not Prime");
        }


        System.out.print("\n");

	}
}

class Marvel
{

  public boolean Prime(int iVal)
	{
		int iDigit = 0;
		int iCnt = 0;
        boolean bFlag = true;
	

		if(iVal < 0)
		{
			iVal = -iVal;
		}

        for(iCnt = 2; iCnt <= iVal/2; iCnt++)
        {
        	if((iVal % iCnt ) == 0)
        	{

               bFlag = false;
               break;

        	}
        }

        return bFlag;

	}
}