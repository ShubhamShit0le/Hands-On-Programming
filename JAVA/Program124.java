import java.util.Scanner;

class ArrayX
{
  public int Arr[];
  
  public ArrayX(int iSize)
  {
     Arr = new int[iSize];

  }

  public void Accept()
  {
    int i = 0;
    Scanner sobj = new Scanner(System.in);

    System.out.print("\nEnter Elements:\n");
    for(i = 0; i < Arr.length;i++)
      {
          Arr[i] = sobj.nextInt();
      }
  }

  public void Display()
  {
    int i = 0;
     System.out.print("\nEntered Elements Are:\n");
     for(i = 0; i < Arr.length; i++)
     {
        System.out.print(Arr[i]+"\n");
     }
  }


}

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

class Program124
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