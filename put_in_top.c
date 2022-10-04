/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_in_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:06:12 by mboualam          #+#    #+#             */
/*   Updated: 2022/09/28 20:31:13 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_in_top_min1(int *stacka, int size)
{
	int		min;

	min = min_number(stacka, size);
	if (min == 0)
		return ;
	else if (min == 1)
		ra(stacka, size);
	else if (min == 2)
	{
		ra(stacka, size);
		ra(stacka, size);
	}
	else if (min == 3)
		rra(stacka, size);
}

void	put_in_top_min2(int *stacka, int size)
{
	int		min;

	min = min_number(stacka, size);
	if (min == 0)
		return ;
	else if (min == 1)
		ra(stacka, size);
	else if (min == 2)
	{
		ra(stacka, size);
		ra(stacka, size);
	}
	else if (min == 3)
	{
		rra(stacka, size);
		rra(stacka, size);
	}
	else if (min == 4)
	{
		rra(stacka, size);
	}
}
                    