/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:19:29 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/08 17:21:43 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*need;
	char	*stack;
	int		n;
	int		i;

	i = 0;
	n = 0;
	need = (char*)needle;
	stack = (char*)haystack;
	while (*need)
	{
		n++;
		need++;
	}
	if (n == 0)
		return (stack);
	need = (char*)needle;
	while (*stack && (i + n) <= (int)len)
	{
		if (!(ft_strncmp(stack, need, n)))
			return (stack);
		stack++;
		i++;
	}
	return (0);
}
