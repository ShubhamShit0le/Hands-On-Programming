import java.util.Scanner;
import Marvelstring.StringX;

class Marvel extends StringX
{
    public int CountVowels()
    {   

      char Arr[] = str.toCharArray();
      
      int iCnt = 0; 
      int i = 0;

      for(i = 0; i<Arr.length; i++)
      {

       	if((Arr[i] == 'a') || (Arr[i] == 'u') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') )
        {
        	 iCnt++;
        }

      }
     
      return iCnt;

    }

}

class Program130
{
	public static void main(String arg[])
	{

        Marvel mobj = new Marvel();
    
        int iRet = 0;
      
        mobj.Accept();

      iRet = mobj.CountVowels();

      System.out.print("\nCount is : "+iRet);

      System.out.print("\n");

	}
}