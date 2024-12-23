#include "shell.h"

/**
 * main - entry point of the shell 
 * Return: Always 0 on success.
 */

 int main (void)
{
char *readline, *tokens[2];
pid_t pid;
int status;

while (1)
{
if (isatty(STDIN_FILENO))
printf("$ ");
readline = line_reader();
if (readline == NULL)
{
printf("\nExiting shell.. \n");
break;
}
tokens[0] = strtok(readline, "\n");
tokens[1] = NULL;
if (tokens[0] == NULL)
{
free(readline);
continue;
}
pid = fork();
if (pid == -1)
{
perror("Fork failed");
free(readline);
continue;
}
if (pid == 0)
{
if (execve(tokens[0], tokens, environ) == -1)
{
perror("command not found");
free(readline);
exit(127);
}
}
else
{
wait(&status);
}
free(readline);
}
return (0)
}