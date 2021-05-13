char	*ft_strchr(const char *s, char c)
{
	char	*r;

	r = (char *)s;
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, char c)
{
	char	*r;
	size_t	i;

	r = (char *)s;
	while (*r)
	{
		r++;
		i++;
	}
	r--;
	while (i > 0)
	{
		if (*r == c)
			return (r);
		r--;
		i--;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return (char *)(haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return (char *)&haystack[i];
		}
		i++;
	}
	return (NULL);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (int)(s1[i] - s2[i]);
}