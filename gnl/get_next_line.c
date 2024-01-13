#include "get_next_line.h"
#include <string.h>
#include <stdio.h>

static char *line_op(char *save, int fd)
{
	int r;
	char *temp;
	char *line;

	temp = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	r = 1;
	while (r != 0 && (!strchr(save, '\n')))
	{
		r = read(fd, temp, BUFFER_SIZE);
		if (r == -1)
		{
			free(temp);
			return (0);
		}
		temp[r] = '\0';
		save = ft_strjoin(save, temp);
	}
	free(temp);
	return (save);
}

static char	*save_op(line)
{
}


char	*get_next_line(int fd)
{
	static char	*save;
	char	*line;
	
	line = line_op(save, fd);
	save = save_op(line);

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
}

int main(void)
{
	int fd;
	char *line;
	static char *save = "";
	
	fd = open("texto.txt", O_RDONLY);
	line = line_op(save, fd);
	printf("--->%s|\n", line);
	
	free(line);
	close(fd);
	return (0);
}
