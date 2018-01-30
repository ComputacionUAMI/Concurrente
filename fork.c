#include <unistd.h>
#include <stdlib.h>
#include<stdio.h>

/*
Entrada:
Salida:
Descripcion:Creacion de un proceso padre con un hijo
*/
main()
{
  int i;
  switch(fork()){
    case 0:
      printf("Soy el proceso hijo: %d y mi padre es %d \n",getpid(),getppid());
      break;
    case -1:
      printf("Error en la creacion del proceso \n");
      exit(0);
    default:
      printf("Soy el proceso padre: %d \n",getpid());
  }
  sleep(10);
}

