#include "libft.h"
#include <stdio.h>
#include <string.h>

long ft_atol(const char *nptr)
{
	short flag;
	long res;
	
	while (*nptr > 7 && *nptr < 14 && *nptr == 32)
		nptr++;
	if (*nptr == '-')
		flag = 0;
	else if (*nptr == '+')
		flag = 1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res);
}
	
int main(void)	
{
	char *i = "214748364999999999997";
	long a1, a2;

	a1 = atol(i);
	a2 = ft_atol(i);
	printf("%ld\n", a1);
	printf("%ld\n", a2);
}
