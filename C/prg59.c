#include<stdio.h>

void Display( int iRow , int iCol )
{
 
	 int i = 0;
	 int j = 0;
	 
	 
	 if(iRow != iCol)  // filter cause daigonal has to be same rows and same column
	 {
		 return;
	 }
	 
   for(i = 1; i<=iRow; i++)
   {
      for(j =1; j<=iCol; j++)
	  {
             if(i == j )
			 {
                printf("$\t");
			 }
              else if (i < j)
              { 
                printf("#\t");	
			  }
			  else
			  {
				  printf("*\t");
			  }
	  }			  		
	  printf("\n");
   }
 
}

int main()
{
	
	auto int ival1 = 0;
	auto int ival2 = 0;
	printf("\nEnter  Number Of Row : ");
	scanf("%d",&ival1);
	
	printf("\nEnter  Number Of Columns : ");
	scanf("%d",&ival2);
	
	
	Display(ival1,ival2);
	return 0;
	
}	