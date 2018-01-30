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
    //lineal
    //if(fork()!=0){
    //  break;
    //}
    // n-ario
    if(fork()==0){
      printf("Soy el proceso hijo: %d y mi padre es %d \n",getpid(),getppid());
      break;
    }
  }
  sleep(10);
  exit(1);
}

