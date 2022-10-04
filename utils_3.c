/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:55:34 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/03 08:11:40 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	done_sorted(int *stacka, int size)
{
	int		i;

	i = 0;
	while (i < size - 1)
	{
		if (stacka[i] > stacka[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	get_stacktemp_a(int *stacka, char **ar_gv, int size)
{
	int		i;
	long *stacktemp;

	stacktemp = (long *)malloc(sizeof(long) * (size));
	i = 0;
	while (i <size)
	{
		check_digit(ar_gv[i + 1]);
		stacktemp[i] = ft_atoi(ar_gv[i + 1]);
		if (stacktemp[i] > 2147483647)
			ft_error("Error\n");
		else if (stacktemp[i] < -2147483647 - 1)
			ft_error("Error\n");
		stacka[i] = (int)stacktemp[i];
		i++;
	}
	free(stacktemp);
}
