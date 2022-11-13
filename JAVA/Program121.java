import java.util.*;

class Program121
{
  public static void main(String arg[]) 
  {
    Scanner sobj = new Scanner(System.in);
     
        int iNo = 0;
        boolean bRet = false;

        System.out.print("\nEnter NUmber : ");
        iNo = sobj.nextInt();

        Marvel mobj = new Marvel();

        bRet = mobj.Armstrong(iNo);

        if(bRet == true)
        {
          System.out.print("\nNumber Is Armstrong");
        }
        else
        {
          System.out.print("\nNumber Is Not Armstrong");
        }


        System.out.print("\n");

  }
}

class Marvel
{

  public boolean Armstrong(int iVal)
  {
    int iTemp = 0 , iDigCnt =0 , iDigit = 0 , iPower = 1 , iCnt =0;
     int iSum = 0;
    if(iVal < 0)
    {
      iVal = -iVal;
    }

    iTemp = iVal;

    while(iTemp != 0)
    {
      iDigCnt++;

      iTemp = iTemp / 10;
    }

    iTemp = iVal;

    while(iTemp != 0)
    {
      iDigit = iTemp % 10;
 
     for (iCnt = 1; iCnt <= iDigCnt; iCnt++ ) 
     {
       
        iPower = iPower * iDigit;  
     }

     iSum = iSum + iPower;
     iPower = 1;
    
      iTemp = iTemp / 10;
    }
  
  if(iSum == iVal)
  {
    return true;
  }
  else
  {
    return false;
  }

  }

}