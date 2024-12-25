#include "shell.h"

/**
* check_path - Checks if command exists in the path.
* @command: Name of the command.
* Return: Finds the command or NULL.
*/

char *check_path(char *command)
{
char *array[1000], *path = strdup(getenv("PATH"));
char *path_token = strtok(path, ":");
int i = 0;
char *final_path;
}

