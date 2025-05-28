#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 9000
#endif
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd);
char *ft_strdup(char *str);

#endif