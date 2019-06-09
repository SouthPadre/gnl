/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:51:38 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 17:21:07 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a;
	t_list	*b;

	a = *alst;
	while (a)
	{
		b = a;
		ft_lstdelone(&a, del);
		a = b->next;
	}
	*alst = a;
}
