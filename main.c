#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*result;

	(void)argc;
	fd = open(argv[1], O_RDONLY);	
	get_next_line(fd, &result);
//	printf("Main: %s\n", result);
	return (0);
}
