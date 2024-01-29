#include "get_next_line.h"

char *ft_strjoin(char *buffer, char *line)
{
	char *str;
	int i;
	int a;

	str_len = ft_strlen(buffer) + ft_strlen(line)  + 1;
	str = (char *)malloc(sizeof(char) * str_len);
	if (!str)
		return (NULL);
	i = 0;
	if (buffer)
	{
		while (buffer[i])
		{
			str[i] = buffer[i];
			i++;
		}
		free(buffer);
	}
	while (*line)
		str[i++] = *line++;
	str[i] = '\0';
	return (str);
}

char *find_buffer(char *buffer, int n, int count)
{
	char *str;
	int i;
	int j;

	if ((count < 1 && (!buffer)) || (count < 1 && !*buffer))
	{
		free(buffer);
		return (NULL);
	}
	i = ft_strlen(buffer);
	str = (char *)malloc(sizeof(char) * ((i - n) + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (n < i)
	{
		str[j] = buffer[n];
		j++;
		n++;
	}
	str[j] = '\0';
	free(buffer);
	return (str);
}

char *hunter_str(int fd)
{
	char *line;
	static char *buffer;
	int count;

	line = ((char *)malloc((BUFFER_SIZE + 1) * sizeof(char)));
	if (!line)
		return (NULL);
	count = 1;
	while (count > 0 && confirm_n(buffer) < 1)
	{
		count = read(fd, line, BUFFER_SIZE);
		if (count == -1)
		{
			free(line);
			return (NULL);
		}
		line[count] = '\0';
		buffer = ft_strjoin(buffer, line);
	}
	free(line);
	if (!buffer)
		return (NULL);
	line = find_n(buffer, ft_strlen_n(buffer));
	buffer = find_buffer(buffer, ft_strlen_n(buffer), count);
	return (line);
}

char *get_next_line(int fd)
{
	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	return (hunter_str(fd));
}
/*


int     main(void)
{
		int     fd;
		char    *str;
		fd = open("test1.txt", O_RDONLY);


		while (str = get_next_line(fd))
		{
			printf("%s", str);
			free(str);
		}
		str = get_next_line(fd);
		printf("\nretorno 1:%s:\n", str);
		free(str);
		str = get_next_line(fd);
		printf("retorno 2:%s:\n", str);
		free(str);
		str = get_next_line(fd);
		printf("retorno 3:%s:\n", str);
		free(str);
		str = get_next_line(fd);
		printf("retorno 4:%s:\n", str);
		free(str);
		str = get_next_line(fd);
		printf("retorno 4:%s:\n", str);
		free(str);
		str = get_next_line(fd);
		printf("retorno 4:%s:\n", str);
		free(str);
		str = get_next_line(fd);
		printf("retorno 4:%s:\n", str);
		free(str);

		return (0);
}
*/
