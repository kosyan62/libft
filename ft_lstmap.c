/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:54:11 by mgena             #+#    #+#             */
/*   Updated: 2019/09/17 23:33:53 by mgena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lstcpy;
	t_list *res;

	if (lst == NULL || f == NULL)
		return (NULL);
	lstcpy = lst;
	res = lst;
	while (lst != NULL)
	{
		lstcpy = ft_lstnew(lst->content, lst->content_size);
			if (lstcpy == NULL)
				return (NULL);
		lstcpy = f(lst);
		if (lstcpy == NULL)
			return (NULL);
		lstcpy->next = lst->next;
		lstcpy = lstcpy->next;
	}
	return (res);
}

