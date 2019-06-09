/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:09:48 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 17:28:33 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static t_list	*ft_lstclean(t_list *lst)
{
	t_list *a;

	while (lst)
	{
		a = lst;
		free(lst);
		lst = a->next;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*answer;
	t_list	*b;

	if (lst == NULL)
		return (NULL);
	if (!(b = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	b = f(lst);
	answer = b;
	lst = lst->next;
	while (lst)
	{
		if (!(b->next = ft_lstnew(lst->content, lst->content_size)))
			return (ft_lstclean(answer));
		b->next = f(lst);
		lst = lst->next;
		b = b->next;
	}
	return (answer);
}
