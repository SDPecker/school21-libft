char *ft_strchr(char *s, char c)
{
	char *r;

	r = s;
	while (*r)
	{
		if (*r == c)
			return (r);
		r++;
	}
	return (NULL);
}

char *ft_strrchr(char *s, char c)
{
	char *r;
	int i;

	r = s;
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