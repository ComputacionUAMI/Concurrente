#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N 5
main()
{
  int i, count=0, status;
  pid_t pid;
  pid=getpid();
  printf("Soy el proceso padre: %d \n",pid);
  for(i=0;i<N-1;i++){
    if(fork()==0){
      //count = 1;
      break;
    }//else{
     //if(i==N-2){
       // wait(&status);
       // count += WEXITSTATUS(status);
      //}
    //}
  }
  printf("num de procesos: %d \n",count);
  sleep(10);
  exit(1);
}

