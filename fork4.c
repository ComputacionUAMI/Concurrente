#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <wait.h>

#define N 6
main()
{
  int i,j,k,x,n;
  n = 2;
  pid_t pid;
  pid=getpid();
  printf("Soy el proceso padre: %d \n",pid);
  for(i=0;i<2;i++){
    if(i==0){
      for(j=0;j<N-1;j++){
        printf("Soy j: %d \n",j);
      }
    }else{
      for(k=0;k<N-1;k++){
        printf("==================== n: %d \n",N-n);
        if(k>0){
          for(x=0;x<N-n;x++){
            printf("Soy x: %d \n",x);
          }
        } 
        printf("Soy k: %d \n",k);
            n = N n-1;
      }
    }
  }
  sleep(10);
  exit(1);
}

