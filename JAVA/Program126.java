
import MarvellousNumber.ArrayX;

class Marvel extends ArrayX
{
   
     public Marvel(int iVal)
     {
    
      super(iVal);

     }

    public float Average()
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt <Arr.length;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return (iSum / Arr.length);
    }


}

class Program126
{
	public static void main(String arg[])
   {
	  Scanner sobj = new Scanner(System.in);
     

      int iLength = 0;
      float fRet = 0.0f;   

      System.out.print("\nEnter Array Size : ");
      iLength = sobj.nextInt();

       Marvel mobj = new Marvel(iLength);

      mobj.Accept();
      mobj.Display();

      fRet = mobj.Average();


    System.out.print("\nAverage Is : "+fRet);

    System.out.print("\n");
     
   }
}