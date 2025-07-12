/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkingsbl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:09:09 by pkingsbl          #+#    #+#             */
/*   Updated: 2019/12/22 20:41:26 by pkingsbl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_for_char(va_list ap, t_specif *spec)
{
	char	c;
	char	*res;
	int		i;

	i = 1;
	c = (char)va_arg(ap, int);
	if (spec->wide != 0)
	{
		if (spec->minus == 1)
		{
			res = ft_strnew(spec->wide + 2);
			res[0] = c;
			while (i < spec->wide)
			{
				res[i] = ' ';
				i++;
			}
			res[i] = '\0';
		}
		else if (spec->minus == 0)
		{
			res = ft_strnew(spec->wide + 2);
			while (i < spec->wide)
			{
				res[i] = ' ';
				i++;
			}
			res[0] = c;
			res[i] = '\0';
		}
		else
			return (NULL);
		return (res);
	}
	res = ft_strnew(2);
	res[0] = c;
	res[1] = '\0';
	return (res);
}
