import java.util.Scanner;
import Marvelstring.StringX;

class Marvel extends StringX
{
    public int CountVowels()
    {   

      char Arr[] = str.toCharArray();
      
      int iCnt = 0; 
      int i = 0;
   
       while(i < Arr.length)
       {

        if((Arr[i] == 'a') || (Arr[i] == 'u') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') )
        {
           iCnt++;
        }

        i++;

      }
     
      return iCnt;
    
      }
       
}

class Program131
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