#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	print(char **str)
{
	printf("%s\n", *str);
	free(*str);
	*str = NULL;
}

int	main()
{
	int	fd;
	char	*result;

	fd = 0;
	result = NULL;
	get_next_line(fd, &result);
	print(&result);
	close(fd);
	return (0);
}
