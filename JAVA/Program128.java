import java.util.Scanner;


class Marvel
{
	public void Display(String Data)
	{
		System.out.print("\nWelcome "+Data);
	}
}



class Program128
{
   public static void main(String arg[])
   {
   	

      Scanner sobj = new Scanner(System.in);

      String str;
       
       System.out.print("\nEnter Your Name : ");

       str = sobj.nextLine();
     
       Marvel mobj = new Marvel();

       mobj.Display(str);
     

       System.out.print("\n");

   }

}