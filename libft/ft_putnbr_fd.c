/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:01:06 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/08 20:01:18 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static long int	ft_ilen(int n)
{
	long int a;

	a = 1;
	while (n / 10)
	{
		a *= 10;
		n /= 10;
	}
	return (a);
}

void			ft_putnbr_fd(int n, int fd)
{
	long int	m;
	char		c;
	long int	t;

	m = n;
	t = ft_ilen(n);
	if (m < 0)
	{
		m *= -1;
		write(fd, "-", 1);
	}
	while (m || t)
	{
		c = m / t + '0';
		write(fd, &c, 1);
		m %= t;
		t /= 10;
	}
}
