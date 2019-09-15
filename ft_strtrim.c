#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t len;
	char *res;

	len = 0;
	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (ft_strnew(1));
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	res = ft_strnew(len);
	if (res == NULL)
		return (NULL);
	return (ft_strncpy(res, s, len));
}
