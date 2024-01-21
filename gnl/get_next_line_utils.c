#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*dup;

	i = 0;
	x = 0;
	if (!s2)
		return (NULL);
	dup = (char *) malloc((ft_strlen(s1, 0) + ft_strlen(s2, 0) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i != ft_strlen(s1, 0))
	{
		if(!s1)
			break ;
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

size_t	ft_strlen(const char *str, int c)
{
	size_t	len;

	len = 0;
	while (str[len] != c)
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
		return (ft_strdup(""));
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


