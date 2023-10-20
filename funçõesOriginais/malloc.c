/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:58:48 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/12 10:44:30 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	int	*testMalloc;
	int	numeroScan, i;

	printf("Digite um numero qualquer: ");
	scanf("%d", &numeroScan);

	testMalloc = (int*)malloc(numeroScan * sizeof(int));
	i = 0;
	if (testMalloc == NULL)
	{
		printf("Try again.\n");
		exit (0);
	}
	else
	{
		printf("Loading...\n");
		while (i < numeroScan)
		{
			testMalloc[i] = i + 1;
			++i;
		}
		printf("The numbers are: ");
		i = 0;
		while (i < numeroScan)
		{
			printf("%d, ", testMalloc[i]);
			++i;
		}
		printf("\n");
	}

	return (0);
}
