/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 23:12:40 by mgena             #+#    #+#             */
/*   Updated: 2019/09/10 23:53:24 by mgena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (dst[i] != '\0')
		i++;
	while (i < size - 1  && *dst != '\0')
	{
		*dst = src[i];
		i++;
	}
	i++;
	dst[i] = '\0';
	return (i);
}

int main(void)
{
	char a[20] = "12345";
	char aa[20] = "12345";
	char *b = "67890";
	char *bb = "67890";
	size_t i;
	size_t ii;

	i = strlcat (a, b, 9);
	ii = ft_strlcat(aa, bb, 9);
	printf("%zu,  %s\n", i, a);
	printf("%zu,  %s\n", ii, aa);
}
