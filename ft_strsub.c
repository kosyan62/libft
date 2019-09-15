#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;
	size_t i;

	res = ft_strnew(len);
	if (res == 0)
		return (NULL);
	i = 0;
	while (i != len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	return (res);
}
