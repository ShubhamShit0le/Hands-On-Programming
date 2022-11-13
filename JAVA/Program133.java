import java.util.Scanner;
import Marvelstring.StringX;

class Marvel extends StringX
{
    public boolean ChkPalindrome()
    {   

      char Arr[] = str.toCharArray();

      int iStart = 0;
      int iEnd = Arr.length-1;
 
      char Temp;

      while(iStart < iEnd)
      {
        Temp = Arr[iStart];

        Arr[iStart] = Arr[iEnd];

        Arr[iEnd] = Temp;

       iStart++;
       iEnd--;

      }
      
      String nstr = new String(Arr);
      boolean bRet = nstr.equals(str);
      return bRet; 
    }
}

class Program133
{
	public static void main(String arg[])
	{

        Marvel mobj = new Marvel();
        
        boolean bRet = false;

        mobj.Accept();

       bRet = mobj.ChkPalindrome();
   
       if(bRet == true)
       {
       
        System.out.print("\nString is palindrome");
       
       }
       else
       {
         
         System.out.print("\nString is not  palindrome");
             
       }

      System.out.print("\n");

	}

}