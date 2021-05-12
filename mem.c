#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = (char*)s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
	
void	ft_bzero(void *s, size_t n)
{
	char	*p;	
	size_t	i;

	p = (char*)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*r;
	char	*p;

	i = 0;
	r = (char *)dst;
	p = (char *)src;
	while (i < n)
	{
		r[i] = p[i];
		i++;
	}
	return(r);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	*r;

	i = 0;
	r = (char *)dst;
	p = (char *)src;
	while (i < n && p[i])
	{
		*r = p[i];
		i++;
		if (*r == c)
		{
			r++;
			return(r);
		}
		r++;
	}
	return (NULL);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p;
	char	*r;
	char	*buf;

	i = 0;
	r = (char *)dst;
	p = (char *)src;
	
	if (r < p)
		while (len > 0)
		{
			r[len - 1] = p[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			r[i] = p[i];
			i++;
		}
	return (dst);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*r;

	i = 0;
	r = (char *)s;
	while (i < n && *r)
	{
		if (r[i] == c)
			return (&r[i]);
		i++;
	}
	return (NULL);
}

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return(p1[i] - p2[i]);
		i++;
	}
	return (0);
}