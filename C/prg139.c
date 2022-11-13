
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
 char Data[7];


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

iRet = read(fd,Data,6);


printf("%d bytes gets Succesfully read from the file",iRet);

printf("\nData From the file is : %s",Data);

 printf("\n");

return 0;

}