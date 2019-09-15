#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	size_t len;
	unsigned int i;
	char *res;

	len = ft_strlen(s);
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i != len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res); 
}
