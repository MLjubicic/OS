#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int main () {
  pid_t pid;
  int status;

  if (fork() == 0) {
    printf ("Child executing \"/bin/date\"\n");
    printf ("PID(if): %d\n", getpid());
    execl ("/bin/date", "date", 0);
    printf ("Exception!\n");
  }
  printf ("Parent waiting for child's death\n");
  pid=wait (&status);
  printf ("Status:    %d\n", pid);
  printf ("PID:       %d\n", getpid());
  printf ("Parent: Child just died.\n");
  exit(0);
}
