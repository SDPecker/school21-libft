#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "libft.c"

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

	i = 0;
	if (ft_strlen(s1) + ft_strlen(s2) == 0)
		return (NULL);
	
}

int		main(void)
{
	char	*c;
	c = ft_substr("fuck you", 5, 3);
	printf("%s\n", c);
	free(c);
	return (0);
}