/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 02:25:18 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/05 01:27:20 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	char	*save;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	save = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*save == '\0')
	{
		free(save);
		save = NULL;
	}
	line[count + 1] = '\0';
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*strline;
	char		*temp;
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
	temp = save_operator(line);
	save = temp;
	free(temp);
	return (line);
}
