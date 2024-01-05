/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:11:26 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/05 01:35:13 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int fd = open("2text.txt", O_RDONLY);
	char *gnl = get_next_line(fd);
	while (gnl)
	{
		printf("GNL -> %s|\n", gnl);
		//free(gnl);
		gnl = get_next_line(fd);
	}
}
