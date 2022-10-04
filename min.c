/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:28:32 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/03 15:59:27 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_number(int *stacka, int size)
{
	int		min;
	int		i;

	i = 0;
	min = i;
	while (i < size)
	{
		if (stacka[i] < stacka[min])
			min = i;
		i++;
	}
	return (min);
}

int	min_number_value(int *stacka, int size)
{
	int		min;
	int		i;

	i = 0;
	min = i;
	while (i < size)
	{
		if (stacka[i] < stacka[min])
			min = i;
		i++;
	}
	return (stacka[min]);
}


int	max_number(int *stacka, int size)
{
	int		max;
	int		i;

	i = 0;
	max = i;
	while (i < size)
	{
		if (stacka[i] > stacka[max])
			max = i;
		i++;
	}
	return (max);
}
