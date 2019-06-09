/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:49:22 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:13:54 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (s)
	{
		if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (s[start] && i < len)
		{
			new[i] = s[start];
			i++;
			start++;
		}
		new[i] = '\0';
		return (new);
	}
	return (0);
}
