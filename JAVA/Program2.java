import java.util.Scanner;


class Demo2
{
  
    public int AddDigit(int iNo)
    {
      
       int iDigit = 0 ;
       int iAdd = 0;

    	if(iNo < 0)
    	{
    		iNo = -iNo; 
    	}
    
        while(iNo != 0 )
        {
        	iDigit = iNo % 10;

        	iAdd = iAdd + iDigit;

        	iNo = iNo / 10;

        }

        return iAdd;

    }

 

}

class Program2
{
	public static void main(String arg[])
    {
		
	    Scanner sobj = new Scanner(System.in);
	    Demo2 dobj = new Demo2();

	    int iVal = 0;
	    int iRet = 0;

	    System.out.print("\nEnter Number : ");
	    iVal = sobj.nextInt();

	    

	    iRet = dobj.AddDigit(iVal);

	    System.out.print("\nAddition Of Digit is : "+iRet);

	    System.out.print("\n");


	}
}