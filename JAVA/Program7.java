import java.util.Scanner;

class Demo7
{
	public void DisplayFactor(int iNo)
	{
		int iFact = 0;

		if (iNo < 0)
	    {
		   iNo = -iNo;

		}

		for(iFact = 1; iFact <= (iNo / 2); iFact++)
		{
			if((iNo % iFact) == 0)
			{
				System.out.printf(iFact+"\t");
			}
		}

	}
}

class Program7
{
	public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);

      Demo7 dobj = new Demo7();

      int iVal = 0;

      System.out.print("\nEnter Number : ");
      iVal = sobj.nextInt();

      dobj.DisplayFactor(iVal);

      System.out.print("\n");
  

	}
}
