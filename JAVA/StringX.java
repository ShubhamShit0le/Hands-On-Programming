package Marvelstring;

import java.util.Scanner;

public class StringX
{
    public String str;
  
    public void Accept()  
    {
    	Scanner sobj = new Scanner(System.in);

    	System.out.print("\nEnter String : ");

    	str = sobj.nextLine();
    }
}