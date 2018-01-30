#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define N 4
/*
Entrada:
Salida:
Descripci ́
 on:Creacion de procesos
*/
main()
{
  int i,status=0;
  pid_t pid,pid_raiz;
  pid_raiz=getpid();
  for(i=0;i<N;i++){
    if((pid=fork())==0){
      printf("Soy el proceso hijo: %d y mi padre es %d \n",getpid(),getppid());
      break;
    }else{
      if(pid==-1){
        printf("Error en la creacion del proceso \n");
        exit(1);
      }else{
        printf("Soy el proceso padre: %d \n",getpid());
      }
    }
  }
  sleep(10);
  exit(1);
}

