#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t len;
	size_t i;
	char *res;

	len = ft_strlen(s);
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i != len)
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res); 
}
