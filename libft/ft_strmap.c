/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:06:02 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:15:00 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *str;
	char *answer;

	if (s && f)
	{
		str = (char*)s;
		if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
			return (0);
		answer = new;
		while (*str)
		{
			*new = f(*str);
			str++;
			new++;
		}
		*new = '\0';
		return (answer);
	}
	return (0);
}
