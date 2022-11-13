
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
 
  int fd =0;
  char fname[20];
 int iRet = 0;

  printf("\nEnter File Name : ");
  scanf("%s",fname);

 
  fd = open(fname,O_RDWR);

   if(fd == -1)
   {
  
     printf("\nUnable to open");
     return -1;

   }

   iRet = lseek(fd,0,2);

   printf("\nfile Size is is: %d",iRet);


 printf("\n");

return 0;

}