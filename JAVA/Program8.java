import java.util.*;




class Demo8
{

   public boolean CheckPalindrome(int iNo)
   {
     int iDigit = 0;
     int iRev = 0;
     int Temp = iNo;

     while(iNo != 0)
     {
     	iDigit = iNo % 10;

     	iRev = iRev * 10 + iDigit;

     	iNo = iNo / 10;
     
     }

     if(iRev == Temp)
     {
     	return true;
     }
     else
     {
     	return false;
     }



   }


}

class Program8
{
   public static void main(String[] args) 
   {
     Scanner sobj = new Scanner(System.in);

     Demo8 dobj = new Demo8();

     int iVal = 0;
     boolean bRet = false;

     System.out.print("\nEnter Number : ");
     iVal = sobj.nextInt();

     bRet = dobj.CheckPalindrome(iVal);

     if(bRet == true)
     {
     	System.out.print("\nNumber Is Palindrome");
     } 
     else
     {
     	System.out.print("\nNumber Is Not Palindrome");
     }


  System.out.print("\n");


   }


}