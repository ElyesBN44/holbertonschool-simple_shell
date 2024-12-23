#include "shell.h"
/**
* process_line - Executes a single command by forking and using execve.
* @path: path to the command you will execute.
* @tokens: Where the commands are stocked.
* Return: Exits the executed command.
*/
int process_line(char **tokens, char *path)
{
pid_t pid;
int status = 0;
pid = fork();
if (pid == -1)
{
perror("Fork failed");
exit(1);
}
if (pid == 0)
{
execve(path, tokens, environ);
perror("execve failed");
exit(2);
}
else
{
wait(&status);
if (WIFEXITED(status))
status = WEXITSTATUS(status);
}
return (status);
}
