
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
 int fd = 0; 
 int iRet = 0;
 char Fname[30];
 char Buffer[10];  //MUG


 printf("\nEnter File Name : ");
 scanf("%s",Fname);

fd = open(Fname,O_RDONLY);


if(fd == -1)
{
	printf("\nUnable to open file");
    return -1; //return to os
}
else
{
	printf("\nFile Succesfully opened with FD : %d",fd); 

}


printf("\nData From the file is : ");


while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
{
  
  write(1,Buffer,iRet);


}

close(fd);

 printf("\n");

return 0;

}