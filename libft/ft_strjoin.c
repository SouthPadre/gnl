/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:12:49 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:12:14 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*s11;
	char	*s22;
	int		i;

	s11 = (char*)s1;
	s22 = (char*)s2;
	i = 0;
	if (!(s1 && s2))
		return (0);
	if (!(str = (char*)malloc(sizeof(char) *
		(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1))))
		return (NULL);
	while (*s11)
	{
		str[i++] = *s11;
		s11++;
	}
	while (*s22)
	{
		str[i++] = *s22;
		s22++;
	}
	str[i] = '\0';
	return (str);
}
