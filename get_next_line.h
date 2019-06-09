/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:44:27 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/30 13:01:25 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include "./libft/libft.h"
# include <unistd.h>

typedef	struct	s_lst
{
	char			*string;
	int				fd;
	struct s_lst	*next;
	struct s_lst	*back;
}				t_lst;

int				get_next_line(const int fd, char **line);

# define BUFF_SIZE 1

#endif
