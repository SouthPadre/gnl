/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:51:08 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 16:53:32 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int index;

	index = 0;
	while (len != 0)
	{
		if (src[index] == '\0')
			while (len != 0)
			{
				dst[index++] = '\0';
				len--;
			}
		else
		{
			dst[index] = src[index];
			index++;
			len--;
		}
	}
	return (dst);
}
