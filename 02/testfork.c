#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void warten() {
  int i; float x;

  for (i=0;i<100000;i++) {
    x+=1/10;
  }
}


int main()
{
  pid_t k, pid;
  int p, status, q;

  k = fork();
  if (k != 0) { /* gemaess Vorlage im Buch*/
    /* Eltern mit k=Kind-PID*/
    for (p=0; p<20; p++) {
      printf("\t\t\tEltern: %d, Kind=%d\n",p,k);
      warten();
    }
    
    pid=wait(&status);
    printf("\t\t\tKind beendet, PID war: %d\n",pid);
    while(1);
  }
  
  else { /* Kindprozess mit k=0 */
    printf("Kind-PID= %d \n", getpid());
    for (p=0; p<10; p++) {
      printf ("Kind %d,%d\n",p,k);
      warten();
    }
    exit(1);
  }
}