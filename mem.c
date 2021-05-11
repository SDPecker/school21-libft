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