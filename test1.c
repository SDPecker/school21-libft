#include "libft.h"

int		main(void)
{
	char const *str = "hello world";
	char const *sub = "world";
	printf("%s\n", ft_strnstr(str, sub, 10));
	return (0);
}