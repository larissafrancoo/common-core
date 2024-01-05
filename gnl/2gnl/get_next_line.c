/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:11:04 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/05 13:56:00 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*readed;
	//char	*line;
	size_t	count_rd;

	readed = (char *) realloc((BUFFER_SIZE) * sizeof(char));
	count_rd = read(fd, readed, BUFFER_SIZE);
	printf("gnl ---> %s|\n", readed);
	//line = ft_strjoin(readed, line);
	//free(readed);
	return (readed);
}

int main(void)
{
	int i = 0;
	int fd;
	char *readed;

	fd = open("text.txt", O_RDONLY);

	readed = get_next_line(fd);
	printf("main ---> %s|\n", readed);
	//free(readed);
	
	readed = get_next_line(fd);
	printf("main ---> %s|\n", readed);
	//free(readed);
	
	readed = get_next_line(fd);
	printf("main ---> %s|\n", readed);
	//free(readed);

	close(fd);
	free(readed);
}
/*
void freefunct(str, str_buffer)
{
	char *temp
	temp = join(str, str_buffer)
	free(str);
	retorno temp

char	*get_next_line(int fd)
{
	static str;
	char *str_buffer; = '4 2 \n 24\naser\nasef\naaser'

	while (não chega no \n)
		int bytes_readed = read(fd, str_buffer, BUFFER_SIZE);
		str = free_funct(str, str_buffer);
	função -> ler str até \n + 1(que é o próprio \n);
		isso que vc vai retornar;
	função2 ->
}
*/
