char	**ft_split(char *str, char c)
{
	char **array;
	int index;
	int counter;
	int j;
	int how_many_splits;

	how_many_splits = ft_count_splits(str, c);
	array = malloc(how_many_splits * sizeof(char *));
	if (!array)
		return (NULL);
	index = 0;
counter = 0;
	j = 0;
	while (index < how_many_splits)
	{
		while (str[counter] == c)
			counter++;
		j = counter;
		while (str[j] != c)
			j++;
		array[index] = ft_substr(str, counter, j);
	}
	array[index] = NULL;
	return (array);
}
