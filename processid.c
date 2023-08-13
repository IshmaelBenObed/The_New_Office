#include <stdio.h>
#include <unistd.h>

int main()
{
pid_t pid;
pid_t child;
pid = getppid();
child = getpid();

printf("The child process id is %u\n", child);
printf("The parent process id is %u\n", pid);





 
return(0);

}
