/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:58:27 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/20 16:05:16 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	*testCalloc;
	int	numeroScan, i;

	printf("Digite um numero qualquer: ");
	scanf("%d", &numeroScan);

	testCalloc = (int*)calloc(5, sizeof(int));
	i = 0;
	if (testCalloc == NULL)
	{
		printf("Try again.\n");
		exit (0);
	}
	else
	{
		printf("Loading...\n");
		while (i < numeroScan)
		{
			testCalloc[i] = i + 1;
			++i;
		}
		printf("The numbers are: ");
		i = 0;
		while (i < numeroScan)
		{
			printf("%d, ", testCalloc[i]);
			++i;
		}
		printf("\n");
	}

	return (0);
}
