#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N 5
main()
{
  int i;
  pid_t pid;
  pid=getpid();
  printf("Soy el proceso padre: %d \n",pid);
  for(i=0;i<N-1;i++){
    if(fork()!=0){
      break;
    }
  }
  sleep(10);
  exit(1);
}

