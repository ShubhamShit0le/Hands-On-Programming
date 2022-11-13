
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>



int main()
{
 int fd = 0; //file destructor

 char Fname[30];


 printf("\nEnter File Name : ");
 scanf("%s",Fname);

fd = creat(Fname,0777);


if(fd == -1)
{
	printf("\nUnable to create the file");
}
else
{
	printf("\nFile Succesfully created");
}

 printf("\n");

return 0;

}