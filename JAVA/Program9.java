import java.util.*;


class Demo9
{

   public int Reverse(int iNo)
   {
   	 int iDigit = 0;
   	 int iRev = 0;

   	 if(iNo < 0)
   	 {
   	 	iNo = -iNo;
   	 }

   	 while(iNo != 0)
   	 {
   	 	iDigit = iNo % 10;

   	 	iRev = iRev * 10 + iDigit;

   	 	iNo = iNo / 10;
   	 }

    return iRev;

   }


}

class Program9
{

	public static void main(String[] args) 
	{
     
     Scanner sobj = new Scanner(System.in);
     Demo9 dobj = new Demo9();
  
      int iVal = 0;
      int iRet = 0;  
   
     System.out.print("\nEnter Number : ");
     iVal = sobj.nextInt();

       
       iRet = dobj.Reverse(iVal);

       System.out.print("\nReverse iS : "+iRet);

       System.out.print("\n");


	}
}