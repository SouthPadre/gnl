/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:30:02 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/09 16:21:29 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char *str1;
	char *str2;

	if (!s1 || !s2)
		return (0);
	str1 = (char*)s1;
	str2 = (char*)s2;
	if (ft_strcmp(str1, str2))
		return (0);
	else
		return (1);
}
