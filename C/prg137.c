
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
 char Data[] = "MARVELLOUS INFOSYSTEMS";


 printf("\nEnter File Name : ");
 scanf("%s",Fname);

fd = open(Fname,O_RDWR);


if(fd == -1)
{
	printf("\nUnable to open file");
    return -1; //return to os
}
else
{
	printf("\nFile Succesfully opened with FD : %d",fd);

}

iRet = write(fd,Data,22);

printf("%d\nbytes gets Succesfully witten in the file",iRet);

 printf("\n");

return 0;

}