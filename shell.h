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

int main(void);
extern char **environ;
char *line_read(void);
char **parse_the_line(char *readline, const char *separate);
int process_line(char **tokens, char *path);

#endif
