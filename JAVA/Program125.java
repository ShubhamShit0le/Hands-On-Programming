import java.util.Scanner;
import MarvellousNumber.ArrayX;

class Marvel extends ArrayX
{
   
     public Marvel(int iVal)
     {
    
      super(iVal);

     }

    public int Add()
    {
        int iSum = 0;
        int iCnt =0;

        for(iCnt = 0; iCnt <Arr.length;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }


}

class Program125
{
	public static void main(String arg[])
   {
	  Scanner sobj = new Scanner(System.in);
     

      int iLength = 0;
      int iRet = 0;   

      System.out.print("\nEnter Array Size : ");
      iLength = sobj.nextInt();

       Marvel mobj = new Marvel(iLength);

      mobj.Accept();
      mobj.Display();

      iRet = mobj.Add();


    System.out.print("\nAddition Is : "+iRet);

    System.out.print("\n");
     
   }
}