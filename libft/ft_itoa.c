/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:35:16 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/08 20:19:04 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ilen(int n, int i)
{
	int a;

	a = 1;
	while (n / 10)
	{
		a++;
		n /= 10;
	}
	return (a + i);
}

static int	ft_i(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n1)
{
	char		*str;
	int			len;
	int			i;
	long int	n;

	n = n1;
	i = ft_i(n);
	if (n < 0)
		n *= -1;
	len = ft_ilen(n, i);
	if ((str = ft_strnew(len)))
	{
		str[len] = '\0';
		while (len - i > 0)
		{
			len--;
			str[len] = n % 10 + '0';
			n /= 10;
		}
		if (i)
			str[0] = '-';
		return (str);
	}
	return (0);
}
