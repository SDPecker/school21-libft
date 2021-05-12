#include "libft.h"
#include <stdio.h>
#include <strings.h>

int		main(void)
{
	char *src = "1234567890\0";
	char *test = ft_memchr(src, '5', 10);
	printf ("%s\n", test);
}