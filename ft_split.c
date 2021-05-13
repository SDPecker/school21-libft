#include "libft.h"

int		to_next_c(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	/*
	int		i;
	int		j;
	int		numof_words;
	char	*working_str;
	char	*tr;
	char	**res;

	i = 0;
	j = 0;
	numof_words = 0;
	tr = (char *)malloc(2);
	tr[0] = c;
	tr[1] = 0;
	working_str = ft_strtrim(s, tr);
	while (working_str[i])
	{
		if (working_str[i == c])
		{
			numof_words++;
			while (working_str[i] == c)
			{
				i++;
			}
		}
		else
			i++;
	}
	if (working_str[i - 1] != c)
		numof_words++;
	i = 0;
	if (!numof_words)
		return (NULL);
	while (i < numof_words - 1)
	{
		res[i] = 
		
	}
	*/
	
}