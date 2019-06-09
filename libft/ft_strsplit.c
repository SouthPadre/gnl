/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:08:37 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/12 19:39:42 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		*ft_reset(int j, char **arr)
{
	while (j >= 0)
	{
		free(arr[j]);
		j--;
	}
	free(arr);
	return (NULL);
}

static void		ft_zero(int *a, int *b)
{
	*a = 0;
	*b = 0;
}

static size_t	ft_cwords(char *s, char c)
{
	size_t i;
	size_t l;

	i = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			continue;
		l++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (l);
}

static size_t	ft_wordlen(char *s, char c)
{
	size_t	i;
	char	*s1;

	s1 = s;
	i = 0;
	while (*s1 && *s1 != c)
	{
		i++;
		s1++;
	}
	return (i);
}

char			**ft_strsplit(char const *s1, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		l;

	if (!s1 || !c)
		return (NULL);
	if (!(arr = (char**)malloc(sizeof(char*) * (ft_cwords((char*)s1, c) + 1))))
		return (NULL);
	ft_zero(&i, &j);
	while (s1[i] != '\0')
	{
		while (s1[i] == c)
			i++;
		if (!(arr[j] = (char*)malloc(ft_wordlen((char*)&s1[i], c) + 1)))
			return (ft_reset(j, arr));
		if (s1[i] == '\0')
			continue;
		l = 0;
		while (s1[i] != c && s1[i] != '\0')
			arr[j][l++] = s1[i++];
		arr[j++][l] = '\0';
	}
	arr[j] = NULL;
	return (arr);
}
