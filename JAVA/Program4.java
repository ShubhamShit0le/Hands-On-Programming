import java.util.Scanner;

class Demo4
{
  
  public int AddNumber(int iNo)
  {
  	int iSum = 0;
  	int iCnt = 0;

      if(iNo < 0)
      {
      	iNo = -iNo;
      }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
     	iSum = iSum + iCnt;
     }

     return iSum;


  }

}

class Program4
{

  public static void main(String arg[])
  {
     
     Scanner sobj = new Scanner(System.in);
    
     Demo4 dobj = new Demo4();   

    int iVal = 0;
    int iRet = 0;

    System.out.print("\nEnter Number : ");
    iVal = sobj.nextInt();

    iRet = dobj.AddNumber(iVal);

    System.out.print("\nTill that number addition is : "+iRet);

    System.out.print("\n");

  }



}