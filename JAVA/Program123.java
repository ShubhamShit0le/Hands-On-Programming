import java.util.Scanner;

class Ironman
{
    public int Add(int Brr[])
    {
        int iCnt = 0;
        int iAdd = 0;

        for(iCnt = 0; iCnt<brr.length; iCnt++)
        {
          
           iAdd = iAdd + Brr[iCnt];
          
        }

        return iAdd;

    }
}


class Program123
{
	public static void main(String arg[])
   {
	  Scanner sobj = new Scanner(System.in);
      Ironman im = new Ironman();
    
      int iSize = 0;
      int i  = 0;
      int iRet = 0;

	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  int Arr[] = new int[iSize];

      System.out.print("\nEnter Elements:\n");
      
      for(i = 0; i< Arr.length; i++)
      {
      	Arr[i] = sobj.nextInt();
      }

      iRet = im.Add(Arr);

      System.out.print("\nAddition iS : "+iRet);

      System.out.print("\n");


   }
}