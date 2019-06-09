/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:12:07 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/11 16:20:47 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char				*str;
	char				*s1;
	size_t				i;

	if (size == (size_t)-1)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s1 = str;
	i = 0;
	while (i <= size)
	{
		s1[i] = '\0';
		i++;
	}
	return (str);
}
