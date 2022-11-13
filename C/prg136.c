
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>



int main()
{
 int fd = 0; 

 char Fname[30];


 printf("\nEnter File Name : ");
 scanf("%s",Fname);

fd = open(Fname,O_RDWR);


if(fd == -1)
{
	printf("\nUnable to open file");
}
else
{
	printf("\nFile Succesfully opened with FD : %d",fd);
}

 printf("\n");

return 0;

}