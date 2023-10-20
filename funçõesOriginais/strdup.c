/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:58:48 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/12 10:54:17 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char labraba[] = "lfranco test";
	char* testeOriginal = strdup(labraba);

	printf("Funcao Teste: %s\n", testeOriginal);
	return (0);
}
