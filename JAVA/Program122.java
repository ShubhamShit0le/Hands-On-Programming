import java.util.*;

class Program122
{
	public static void main(String arg[])
   {
	  Scanner sobj = new Scanner(System.in);
    
      int iSize = 0;
      int i  = 0;

	  System.out.print("\nEnter Array Size : ");
	  iSize = sobj.nextInt();

	  int Arr[] = new int[iSize];

      System.out.print("\nEnter Elements:\n");
      
      for(i = 0; i< Arr.length; i++)
      {
      	Arr[i] = sobj.nextInt();
      }

      System.out.print("\nEntered Elements Are:\n");
       
       for(i = 0 ; i < Arr.length; i++)
       {

        	System.out.print(Arr[i]+"\n");
       
       }

      System.out.print("\n");


   }
}