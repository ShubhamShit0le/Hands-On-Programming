/*

Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %

*/




import java.util.Scanner;


class Demo70
{
   public void Display(char cVar)
   {

   	 if((cVar >= 65) && (cVar <= 90))
   	 {
   	    cVar = Character.toLowerCase(cVar);
   	 }
   	 else if((cVar >= 97) && (cVar <= 122))
   	 {
   	 	 cVar = Character.toUpperCase(cVar);

   	 }
    
    System.out.println("\nChanged case is : "+cVar);
    
   }
   	 
}



class Program70
{
	public static void main(String[] args) 
	{

		Scanner sobj = new Scanner(System.in);

		System.out.print("\nEnter Character : ");
		char cVal = sobj.next().charAt(0);

		Demo70 dobj = new Demo70();
        
        dobj.Display(cVal);
    
         System.out.print("\n");

	
	}
}

