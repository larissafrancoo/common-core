#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 5

char *read_save(char *save, int fd)
{
	int readed;
	char *temp;
	char *line;

	temp = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	readed = 1;
	while (readed != 0 && (!strchr(save, '\n')))
	{
		readed = read(fd, temp, BUFFER_SIZE);
		if (readed == -1)
		{
			free(temp);
			return (0);
		}
		temp[readed] = '\0';
		save = ft_strjoin(save, temp);
	}
	free(temp);
	return (save);
}

int main(void)
{
	int fd;
	char *line;
	static char *save = "";
	
	fd = open("texto.txt", O_RDONLY);
	line = read_save(save, fd);
	
	close(fd);
	return (0);
}
