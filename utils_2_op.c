/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:45:05 by mboualam          #+#    #+#             */
/*   Updated: 2022/09/27 05:29:12 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(int *stacka, int *stackb, int size)
{
	rra(stacka, size);
	rrb(stackb, size);
}



long	ft_atoi(char *s)
{
	long	result;
	int		signe;
	int		i;

	signe = 1;
	i = 0;
	result = 0;
	while ((s[i] == ' ') || (s[i] >= 9 && s[i] <= 13))
		i++;
	if ((s[i] == '-') || (s[i] == '+'))
	{
		if (s[i] == '-')
			signe = -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	return (signe * result);
}
