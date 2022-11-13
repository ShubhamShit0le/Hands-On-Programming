import java.util.Scanner;
import Marvelstring.StringX;

class Marvel extends StringX
{
    public String RevStringX()
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

      return new String(Arr);    

       // return String.valueOf(Arr); OR
  

    }

}

class Program132
{
	public static void main(String arg[])
	{

        Marvel mobj = new Marvel();
        
        String sRet;

        mobj.Accept();

       sRet = mobj.RevStringX();

       System.out.print("\nReverse String Is : "+sRet);

      System.out.print("\n");

	}
}