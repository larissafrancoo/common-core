/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:29:41 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/17 05:42:52 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int fd = open("ft_putendl_fd", 'a');
	ft_putendl_fd("lalalal", 1);
	close(fd);
	return (0);
}
