/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:35:54 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 17:12:47 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = (t_list*)malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if ((void*)content != NULL)
	{
		if (!(tmp->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy(tmp->content, content, content_size);
		tmp->next = NULL;
		tmp->content_size = content_size;
	}
	else
	{
		tmp->content = NULL;
		tmp->next = NULL;
		tmp->content_size = 0;
	}
	return (tmp);
}
