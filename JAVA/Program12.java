import java.util.*;


class Demo12
{
	public void DisplayTable(int iNo)
	{
      int iCnt = 0;
      int itbl = 0;

      if(iNo < 0)
      {
      	iNo = -iNo;
      }

      if(iNo == 0 || iNo == 1)
      {
      	return ;
      }


      for(iCnt = 1; iCnt <= 10; iCnt++)
      {
      
        itbl = iNo * iCnt;

        System.out.print(itbl+"\n");

      }

	}
}

class Program12
{
   public static void main(String[] args)
	{
	
	 Scanner sobj = new Scanner(System.in);
	 Demo12 dobj = new Demo12();

	 int iVal = 0;

     System.out.print("\nEnter  Number : ");
     iVal = sobj.nextInt();

     dobj.DisplayTable(iVal);

     System.out.print("\n"); 
  


    }


 } 