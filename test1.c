#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char const *str = "hello world";
	char const *sub = "hello worle";
	printf("%i\n", ft_strncmp(str, sub, 15));
	return (0);
}