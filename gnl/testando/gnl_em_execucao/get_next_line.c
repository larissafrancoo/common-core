/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 02:25:18 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/02 03:19:40 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*line_operator(int fd, char *strline, char *save)
{
	int		rd_line;
	char	*temp;

	rd_line = 1;
	while (rd_line != '\0')
	{
		rd_line = read(fd, strline, BUFFER_SIZE);
		if (rd_line < 0)
			return (0);
		else if (rd_line == 0)
			break ;
		if (save == NULL)
			save = ft_strdup("");
		temp = save;
		strline[rd_line] = '\0';
		save = ft_strjoin(temp, strline);
		free(temp);
		temp = NULL;
		if (ft_strchr(strline, '\n'))
			break ;
	}
	return (save);
}

static char	*save_operator(char *line)
{
	size_t	count;
	unsigned int	linesize;
	char	*save;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0')
		return (0);
	linesize = ft_strlen(line);
	save = ft_substr(line, count + 1, linesize - count);
	printf("--->DEPOIS DA SUB<---\n");
	printf("==> SAVE: %s|\n", save);
	printf("==> LINE: %s|\n", line);
	printf("==> COUNT: %ld|\n", count);
	printf("==> LINESIZE: %d|\n", linesize);
	if (*save == '\0')
	{
		free(save);
		save = NULL;
	}
	line[count] = '\0';
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*strline;
	static char	*save;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	strline = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!strline)
		return (0);
	line = line_operator(fd, strline, save);
	free(strline);
	strline = NULL;
	if (!line)
		return (NULL);
	save = save_operator(line);
	return (line);
}

#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	i;
	int	fd = open("2teste.txt", O_RDONLY);
	char *line;
	//char *strline = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	//char *save = NULL;
	//char *line = line_operator(fd, strline, save);	
	//save = save_operator(line);

	for (i = 0; i < 100 || line != NULL; i++) {
		line = (char *) malloc(BUFFER_SIZE * sizeof(char));
		line = get_next_line(fd);	
		printf("\n-l%i>%s'\n\n", i, line);
		free(line);
	}
	//printf("-p>%s' \n", save);
	close(fd);
	return (0);
}
