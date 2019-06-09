/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:47:08 by mraymon           #+#    #+#             */
/*   Updated: 2019/04/11 15:35:14 by mraymon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_cost(long long int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 1;
}

int			ft_atoi(char *str)
{
	int						index;
	long long int			nbr;
	int						mark;

	ft_cost(&nbr, &index, &mark);
	while ((str[index] > 8 && str[index] < 14) || str[index] == 32)
		index++;
	if (str[index] == 43)
		index++;
	else if (str[index] == '-')
	{
		index++;
		mark = -1;
	}
	while (str[index] != '\0')
	{
		if (str[index] < 48 || str[index] > 57)
			return (nbr * mark);
		nbr = (nbr * 10) + (str[index++] - 48);
		if (nbr < 0 && mark == -1)
			return (0);
		if (nbr < 0 && mark == 1)
			return (-1);
	}
	return (nbr * mark);
}
