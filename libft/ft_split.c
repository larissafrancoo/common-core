/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:04:11 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/08 04:18:39 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

static size_t	w_len(const char *s, char c, size_t x)
{
	size_t	count;

	count = 0;
	while (s[x] != c)
	{
		count++;
		x++;
	}
	return (count);
}

static size_t	w_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
		 	i += w_len(s, c, i);
		}
	}
	return (count);
}

static char	*w_alloc(const char *s, char c, size_t x)
{
	size_t		len;
	char	*string;

	len = w_len(s, c, x);
	string = ft_substr(s, x, len);
	printf ("Valor de w_alloc: %s \n", string);
	return (string);
}

char	**ft_split(const char  *s, char c)
{
	size_t		i;
	size_t		o;
	size_t		x;
	char	**str;

	i = w_count(s, c);
	o = 0;
	x = 0;
	str = (char **) malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (o < i && s[x] != '\0')
	{
		while (s[x] == c)
			x++;
		str[o] = w_alloc(s, c, x);
		x += w_len(s, c, x);
		o++;
	}
	str[o] = NULL;
	return (str);
}

int main(void)
{
	char *s = ".....lari..ama.chocolate..e.acai.6.7.8.9.10.11.12.13...";
	char c = '.';
	char **ret = ft_split(s, c);
	size_t i = 0;
	
	size_t o = w_count(s, c);
	printf ("\nValor de w_count: %ld \n\n", o);

	while (i < o)
	{
		printf ("valor de ret: |%s|\n", ret[i]);
		i++;
	}
	return (0);
}
