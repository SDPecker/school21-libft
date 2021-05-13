#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*r;
	int		i;
	int		j;

	if (start > ft_strlen(s) - 1 || !s)
		return (NULL);
	r = (char *)malloc(len + 1);
	i = 0;
	j = start;
	while (i < len && j < ft_strlen(s))
	{
		r[i++] = s[j++];
	}
	r[i] = 0;
	return (r);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*r;

	r = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (ft_strlen(s1) + ft_strlen(s2) == 0)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		while (s1[j])
			r[i++] = s1[j++];
		j = 0;
		while (s2[j])
			r[i++] = s2[j++];
	}
	return (r);	
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		finish;
	char	*r;

	i = 0;
	start = 0;
	finish = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	while (ft_strchr(set, s1[finish]) != NULL)
		finish--;
	r = (char *)malloc(finish - start + 1);
	if (start >= finish)
		return (NULL);
	while (start <= finish)
		r[i++] = s1[start++];
	r[i] = 0;
	return (r);
}