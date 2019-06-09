/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:50:12 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 20:09:39 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *sr;
	unsigned char *ds;

	sr = (unsigned char*)src;
	ds = (unsigned char*)dst;
	if (sr == ds)
		return (ds);
	if (ds > sr)
		while (len-- > 0)
			ds[len] = sr[len];
	else
		ft_memcpy(ds, sr, len);
	return (ds);
}
