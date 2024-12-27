#include "shell.h"

/**
 * _getenv - Retrieves the value of an environment variable.
 * @name: Name of the environment variable to find.
 * Return: Pointer to the value of the variable.
 */

char *_getenv(const char *name)
{
int i;
size_t name_len = strlen(name);
for (i = 0; environ[i] != NULL; i++)
{
if (strncmp(environ[i], name, name_len) == 0 && environ[i][name_len] == '=')
{
return (environ[i] + name_len + 1);
}
}
return (NULL);
}
