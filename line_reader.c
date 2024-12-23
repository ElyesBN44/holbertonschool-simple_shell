#include "shell.h"
/**
* line_read - reads a line from stdin
* Return: a pointer to the read line
*/
char *line_read(void)
{
char *input = NULL;
size_t buffsize = 0;
ssize_t line_length;
line_length = getline(&input, &buffsize, stdin);
if (line_length == -1)
{
free(input);
if (feof(stdin))
exit(0);
else
{
perror("Error reading input");
exit(1);
}
}
return (input);
}
