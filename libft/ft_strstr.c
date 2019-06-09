/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:54:20 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/08 15:54:10 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*need;
	char	*stack;
	int		n;

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
	while (*stack)
	{
		if (!(ft_strncmp(stack, need, n)))
			return (stack);
		stack++;
	}
	return (0);
}
