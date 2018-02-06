#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <wait.h>

#define N 2
main()
{
  int i,j,n;
  n = N-1;
  pid_t pid;
  pid=getpid();
  printf("Soy el proceso padre: %d \n",pid);
  for(i=0;i<N-1;i++){
    if(fork()!=0){ 
      for(j=0;j<n-i;j++){
        if(fork()!=0){
          break;
        }
      }
      break;
    }
  }
  sleep(10);
  exit(1);
}

