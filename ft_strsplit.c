#include "libft.h"
#include <stdio.h>

size_t ft_strnum(char const *s, char c)
{
	size_t ptrnum;

	ptrnum = 1;
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			ptrnum++;
	}
	return (ptrnum);
}


char	**ft_strsplit(char const *s, char c)
{
	size_t ptrnum;
	size_t i;
	char **res;
	char **tmp;

	if (s == NULL)
		return (NULL);
	ptrnum = ft_strnum(s, c);
	res = (char**)malloc(sizeof(char*) * ptrnum);
	tmp = res;
	while (*s != '\0')
	{
		*res = malloc(ft_strclen(s, c) + 1);
		i = 0;
		while (*s != c && *s != '\0')
		{
			*res[i] = *s;
			i++;	
			s++;
		}
		*res[i] = '\0';
		if (*s == '\0')
			return (tmp);
		s++;
		res++;
	}
}


void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(void)
{
	char **a = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("%c\n", **a);

}
