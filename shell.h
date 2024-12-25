#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

#define TOK_DELIM " \t\n"
#define SIZE 64
extern char **environ;
int main(void);
char *line_read(void);
char **parse_the_line(char *readline, const char *separate);
int process_line(char **tokens, char *path);
void _env(void);

void free_d_p(char **array);

int process_line(char **tokens, char *path);

#endif
