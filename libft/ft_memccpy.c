/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:54:53 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:20:23 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	void	*s1;

	s1 = ft_memchr(src, c, n);
	if (s1)
		return (ft_memcpy(dst, src, (s1 - src + 1)) + (s1 - src + 1));
	ft_memcpy(dst, src, n);
	return (0);
}
