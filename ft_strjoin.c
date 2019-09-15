#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t l1;
	size_t l2;
	char *res;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = ft_strnew(l1 + l2);
	if (res == NULL)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(&res[l1], s2);
	return (res);
}
