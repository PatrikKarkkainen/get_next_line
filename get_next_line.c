#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include <string.h>
#include <stdlib.h>

int	get_next_line(const int fd, char **line)
{
	char	buf[BUF_SIZE + 1];

	if (!*line)
		*line = (char *)malloc(sizeof(char) * 50);

	while (read(fd, buf, 1) > 0)
	{
		if (buf[0] == '\n')
			return (0);
		strncat(*line, buf, 1);
	}
	return (0);	
}
