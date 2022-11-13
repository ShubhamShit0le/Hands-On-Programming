
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
 int fdsrc = 0; 
 int fddest = 0;
 int iRet = 0;
 char Fname1[30];
 char Fname2[30];
 char Buffer[10];  //MUG


 printf("\nEnter Source File Name : ");
 scanf("%s",Fname1);

fdsrc = open(Fname1,O_RDONLY);


if(fdsrc == -1)
{
	printf("\nUnable to open file");
    return -1; //return to os
}
else
{
	printf("\nFile Succesfully opened with FD : %d",fdsrc); 

}

printf("\nEnter Destination File Name : ");
scanf("%s",Fname2);

fddest = creat(Fname2,0007);

printf("\nData From the file is : ");


while((iRet = read(fdsrc,Buffer,sizeof(Buffer))) != 0)
{
  
  write(fddest,Buffer,iRet);


}

close(fdsrc);
close(fddest);

 printf("\n");

return 0;

}