#include "shell.h"



int execute_line(char *command)
{
pid_t pid;
int status;
pid = fork();
if (pid == -1)
{
perror("Fork failed");
return (1);
}
if (pid == 0)
{
char *args[] = {command, NULL};
if (execve(command, args, environ) == -1)
{
perror("Execve failed");
exit(2);
}
}
else
{
if (wait(&status) == -1)
{
perror("Wait failed");
return (3);
}
if (WIFEXITED(status))
return (WEXITSTATUS(status));
}
return (0);
}
