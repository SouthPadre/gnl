/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:32:32 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/10 15:15:35 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#define SPACE(a) ((a =='\n' || a == ' ' || a == '\t') ? 1 : 0)

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	if (!s)
		return (0);
	i = 0;
	while (SPACE(s[i]))
		i++;
	j = ft_strlen((char*)s);
	while (j && SPACE(s[j - 1]))
		j--;
	k = 0;
	if ((str = ft_strnew((j > i) ? (j - i) : 0)))
	{
		while (i < j)
			str[k++] = s[i++];
		str[k] = '\0';
	}
	return (str);
}
