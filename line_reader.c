#include "shell.h"



char *read_line(void)
{
char *buffer = NULL;
size_t buffer_size = 0;
ssize_t line_length;
line_length = getline(&buffer, &buffer_size, stdin);
if (line_length == -1)
{
free(buffer);
if (feof(stdin))
exit(0);
else
{
perror("Error reading input");
exit(1);
}
}
return buffer;
}
