#include "libft.h"

void *ft_memalloc(size_t size)
{
	char *res;
	
	res = malloc(size);
	if (res == NULL)
		return(NULL);
	while (size != 0)
		((char*)res)[size--] = 0;
	return (res);
}
