#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
 
 int fd = 0;
 char Arr[] = "Hello";

 fd = open("LB17.txt",O_RDWR | O_APPEND);

 if(fd == -1)
 {
  
  printf("\nUnable to open file");

 }

  write(fd,Arr,5);

  close(fd);

 printf("\n");

return 0;

}