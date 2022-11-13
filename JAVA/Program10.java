import java.util.*;


class Demo10
{

	public boolean CheckPerfect(int iNo)
	{
      int iCnt = 0;
      int iSum = 0;

      if (iNo < 0)
      {
        iNo = -iNo; 	
      }

       if(iNo == 0)
       {
       	return false;
       }


      for (iCnt = 1; iCnt <= iNo/2; iCnt++) 
      {
        if(iNo % iCnt == 0)
        {
        	iSum = iSum + iCnt;
        }

      }

      if(iSum == iNo)
      {
      	return true;
      }
      else
      {
      	return false;
      }

	}
}


class Program10
{

   public static void main(String[] args)
   {
   	
     Scanner sobj = new Scanner(System.in);
     Demo10 dobj = new Demo10();


     int iVal = 0;
     boolean bRet = false;

     System.out.print("\nEnter Number : ");
     iVal = sobj.nextInt();


     bRet = dobj.CheckPerfect(iVal);

     if(bRet == true)
     {
     	System.out.print("\nNumber is perfect");
     } 
     else
     {
     	System.out.print("\nNumber is not perfect");
     }



    System.out.print("\n");


   }



}