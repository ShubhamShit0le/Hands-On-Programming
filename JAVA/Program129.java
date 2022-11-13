import java.util.Scanner;

class StringX
{
    public String str;
  
    public void Accept()  
    {
    	Scanner sobj = new Scanner(System.in);

    	System.out.print("\nEnter String : ");

    	str = sobj.nextLine();
    }

	  public void Display()
      {
      	System.out.print("\nString is : "+str);
      }

}

class Program129
{
	public static void main(String arg[])
    {
	   
      StringX sobj = new StringX();

      sobj.Accept();
      sobj.Display();
       
      System.out.print("\n");


	}
}