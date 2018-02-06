#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N 5
main()
{
  int i, status, count=1;
  pid_t pid;
  pid=getpid();
  printf("Soy el proceso padre: %d \n",pid);
  for(i=0;i<N-1;i++){
    if(fork()!=0){
      wait(&status);
      count += WEXITSTATUS(status);
      break;
    }else{
      count += 1;
    }
  }
  printf("%d processes created\n", count);
  sleep(10);
  exit(1);
}

