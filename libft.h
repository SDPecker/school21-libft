#include "alloc.c"
#include "atoi.c"
#include "libft.c"
#include "mem.c"
#include "strchr.c"
#include "upperlower.c"
#include "add1.c"

void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
//memcpy
//memccpy
//memmove
//memchr
//memcmp
size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(char *s, char c);
char	*ft_strrchr(char *s, char c);
//strnstr
//strncmp
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_strndup(const char *s, size_t n);