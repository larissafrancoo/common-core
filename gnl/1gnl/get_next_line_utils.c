/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 02:25:37 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/03 15:51:27 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (s2[i] != '\0')
	{
		if (s2[i] != c)
			i++;
		else
			return ((char *)&s2[i]);
	}
	if (c == '\0')
		return ((char *)&s2[i]);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = (ft_strlen(s) + 1);
	dup = (char *) malloc(len *  sizeof(char));
	if (!dup)
		return (NULL);
	while (i != len)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*dup;

	i = 0;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	dup = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		dup[i] = s2[x];
		x++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	o;
	char			*ret;

	i = start;
	o = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (0);
	ret = (char *) malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (o < len)
	{
		ret[o] = s[i];
		i++;
		o++;
	}
	ret[o] = '\0';
	return (ret);
}
