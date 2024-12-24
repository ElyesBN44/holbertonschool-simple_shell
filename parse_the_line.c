#include "shell.h"
/**
*parse_line - Parses the input line into an array.
*@readline: The string that will be parsed.
*@separate: To separate the array into words.
*Return: The array of words.
*/
char **parse_the_line(char *readline, const char *separate)
{
int i = 0, size = SIZE;
char **tokens=(char **) malloc(size * sizeof(char * )), *token = NULL;
token = strtok(readline, separate);
while (token != NULL)
{
tokens[i] = strdup(token);
i++;
token = strtok(NULL, separate);
}
tokens[i] = NULL;
free(readline);
return(tokens);
}
