#include "shell.h"

/**
 * free_d_p - Frees a dynamically allocated array of pointers.
 * @array: The double pointer to free.
 */
 void free_d_p(char **array)
 {
int i;
if (array == NULL)
return;
for (i = 0; array [i] != NULL; i++)
{
free(array[i]);
}
free(array);
}
