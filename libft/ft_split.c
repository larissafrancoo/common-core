/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:04:11 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/06 17:09:02 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

static int	w_count(const char *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*w_str(const char *s, char c, int i)
{
	int		w_len;
	char	*string;

	w_len = w_count(s, c, i);
	string = ft_substr(s, i, (w_len));
	return (string);
}

char	**ft_split(const char  *s, char c)
{
	int		i;
	int		o;
	char	**str;

	i = 0;
	o = 0;
	while (*s)
	{
		if (s[i] == c)
			i++;
		else
		{
			str[o] = (char **) malloc((w_count(s, c, i) + 1) * sizeof(char));
			*str = w_str(s, c, i);
			o += i;
		}
		s++;
	}
	return (str);
}

int main(void)
{
	char *s = "lari_jord_fran_net";
	char c = '_';
	char **ret = ft_split(s, c);
	int i = 0;

	printf ("\nvalor da string: |%s| \n\n", ret[i]);
	return (0);
}
