
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
 
  int fd =0;
  char fname[20];
 char Buffer[10];

 int iCnt = 0;
 int iRet = 0;
  int i = 0;

  printf("\nEnter File Name : ");
  scanf("%s",fname);

 
 fd = open(fname,O_RDWR);

   if(fd == -1)
   {
  
     printf("\nUnable to open");
     return -1;

   }

  
     while((iRet = read(fd,Buffer,10)) != 0)
     {
    
       for(i = 0; i < iRet; i++)
       {
        

           if(Buffer[i] == 'a')
           {
     

                iCnt++;

           }


       }
        



     }

   printf("\nTotal Number Of a Are : %d",iCnt);


 printf("\n");

return 0;

}