#include "libft.h"

size_t ft_strclen(const char *s, char c)
{
	size_t  i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}
