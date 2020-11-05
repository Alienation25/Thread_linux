#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>


int status ;


int main() {
 int n;
 scanf("%d",&n);

 if(fork()==0){
 //Дочерний 
 for(int i=0;i<100000000;++i);
 n=1/n;
 exit(0);
 }


 //родительский 
 wait(&status);
 printf("%d",status );
 printf("Press Enter");
 scanf("%d",&n);

}
