/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:23:44 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 16:38:42 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	lendst;

	n = 0;
	lendst = ft_strlen(dst);
	if (lendst >= size)
		return (ft_strlen((char*)src) + size);
	while ((lendst + n) < (size - 1) && src[n])
	{
		dst[lendst + n] = src[n];
		n++;
	}
	while ((lendst + n) < size)
	{
		dst[lendst + n] = '\0';
		n++;
	}
	return (lendst + ft_strlen((char*)src));
}
