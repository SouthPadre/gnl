/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:20:51 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:15:54 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*new;

	i = 0;
	if (s && f)
	{
		str = (char*)s;
		if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
			return (0);
		while (str[i])
		{
			new[i] = f(i, str[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (0);
}
