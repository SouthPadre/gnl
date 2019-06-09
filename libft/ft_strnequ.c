/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:33:57 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/09 16:02:53 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	if (!s1 || !s2)
		return (0);
	i = (unsigned int)n;
	str1 = (char*)s1;
	str2 = (char*)s2;
	if (ft_strlen(str1) < i && ft_strlen(str2) < i)
		return (ft_strequ(str1, str2));
	if (ft_strncmp(str1, str2, i))
		return (0);
	else
		return (1);
}
