#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# define BUFF_SIZE 64
# define MAX_FD 1024

#include <stdlib.h>

int	get_next_line(const int fd, char **line);
char    *ft_strdup(const char *string);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlen(const char *str);
#endif
