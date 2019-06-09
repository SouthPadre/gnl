/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:49:21 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/30 10:49:25 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

void	del_elem(int fd, t_lst **lst)
{
	t_lst *del;

	del = *lst;
	while (del->fd != fd)
		del = del->next;
	if (del->back)
		del->back->next = del->next;
	else
		*lst = del->next;
	if (del->next)
		del->next->back = del->back;
	free(del->string);
	free(del);
}

t_lst	*new_elem(char *str, int fd)
{
	t_lst	*new;

	if (!(new = (t_lst*)malloc(sizeof(t_lst))))
		return (0);
	if (!(new->string = (char*)malloc(ft_strlen(str) + 1)))
		return (0);
	new->string = ft_strcpy(new->string, str);
	new->fd = fd;
	new->next = NULL;
	new->back = NULL;
	return (new);
}

void	create_lst(char *str, int fd, t_lst **begin)
{
	t_lst *wl;

	wl = *begin;
	if (!wl)
		*begin = new_elem(str, fd);
	else
	{
		while (wl->next)
			wl = wl->next;
		wl->next = new_elem(str, fd);
		wl->next->back = wl;
	}
	free(str);
}

char	*find_str(int fd, t_lst **begin)
{
	t_lst	*wl;
	char	*s1;
	char	*s2;
	int		i;

	wl = *begin;
	while (wl != NULL && (wl->fd != fd))
		wl = wl->next;
	if (!wl)
		return (NULL);
	i = 0;
	s2 = wl->string;
	while (s2[i] && s2[i] != '\n')
		i++;
	s1 = ft_strsub(wl->string, 0, i);
	if (s2[i] == '\n')
		i++;
	wl->string = ft_strsub(wl->string, i, (ft_strlen(s2) - i));
	free(s2);
	s2 = wl->string;
	if (!s2[0])
		del_elem(fd, begin);
	return (s1);
}

int		get_next_line(const int fd, char **line)
{
	static t_lst	*lst;
	char			*s2;
	char			*s1;
	char			buf[BUFF_SIZE + 1];
	int				pot;

	pot = 0;
	s1 = ft_strnew(1);
	if (fd < 0 || !line || (read(fd, buf, 0) < 0))
		return (-1);
	while ((pot = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[pot] = '\0';
		s2 = s1;
		s1 = ft_strjoin(s1, buf);
		free(s2);
	}
	if (((*line = find_str(fd, &lst)) == NULL) && (ft_strlen(s1) == 0))
		return (0);
	if (*line != NULL)
		return (1);
	create_lst(s1, fd, &lst);
	*line = find_str(fd, &lst);
	return (1);
}
