/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:22:15 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 15:43:28 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *sr;
	unsigned char *ds;

	if (!dst && !src)
		return (NULL);
	sr = (unsigned char*)src;
	ds = (unsigned char*)dst;
	while (n)
	{
		*ds = *sr;
		sr++;
		ds++;
		n--;
	}
	return (dst);
}
