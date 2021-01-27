

#include <sys/wait.h>

void trataExitCode(int pid,int exit_code)
{
int pid,exit_code,statcode,signcode;
char buffer[128];

if (WIFEXITED(exit_code)) {
    statcode = WEXITSTATUS(exit_code);
    sprintf(buffer,“El proceso %d termina con exit code %d\n”, pid, statcode);
    write(1,buffer,strlen(buffer));
}
else {
    signcode = WTERMSIG(exit_code);
    sprintf(buffer,“El proceso %d termina por el signal %d\n”, pid, signcode);
     write(1,buffer,strlen(buffer));
}
