#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include <string.h>

int	get_next_line(const int fd, char **line)
{
	int		ret;
//	const char	*ch[BUFF_SIZE];
	char		buf[BUFF_SIZE + 1];

	if (fd < 0)
		return (-1);
	if (!*line)
		*line = (char *)malloc(sizeof(char) * 50);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (buf[0] == '\n')
			return (1);
		*line = ft_strdup(buf);
	}
	return (1);
}

char	*ft_strdup(const char *string)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(string);
	str = (char *)malloc((len + 1) * sizeof(char));
	while (string[i] != '\0')
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
