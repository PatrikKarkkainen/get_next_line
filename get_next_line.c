#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include <string.h>

#include <stdio.h>

int	get_next_line(const int fd, char **line)
{
	int		ret;
	const char	*ch;
	char		buf[BUFF_SIZE + 1];
	char		*temp;

	if (fd < 0)
		return (-1);
	if (!*line)
		*line = (char *)malloc(sizeof(char) * 50);
	while ((ret = read(fd, buf, 1)) > 0)
	{
		if (buf[0] == '\n')
			break ;
		if (ch == NULL)
			ch = ft_strdup(buf);
		else
		{
			temp = ft_strjoin(ch, buf);
			ch = temp;
		}
	}
	printf("%s\n", ch);
	return (0);
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*str;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc((s1_len + s2_len) * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j++] = s2[i++];
	}
	str[j] = '\0';
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
