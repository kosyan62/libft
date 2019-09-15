#include "libft.h"

char *ft_strnew(size_t size)
{
	char *res;

	res = ft_memalloc(size + 1);
	if (res == NULL)
		return (NULL);
	return (res);
}
