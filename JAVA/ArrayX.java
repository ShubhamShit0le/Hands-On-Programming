package MarvellousNumber;
import java.util.*;

public class ArrayX
{
  public int Arr[];
  
  public ArrayX(int iSize)
  {
     Arr = new int[iSize];

  }

  public void Accept()
  {
    int i = 0;
    Scanner sobj = new Scanner(System.in);

    System.out.print("\nEnter Elements:\n");
    for(i = 0; i < Arr.length;i++)
      {
          Arr[i] = sobj.nextInt();
      }
  }

  public void Display()
  {
    int i = 0;
     System.out.print("\nEntered Elements Are:\n");
     for(i = 0; i < Arr.length; i++)
     {
        System.out.print(Arr[i]+"\n");
     }
  }


}