/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:43:45 by mboualam          #+#    #+#             */
/*   Updated: 2022/09/29 02:11:09 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *stacka, int size)
{
	int	first;
	int	i;

	i = 0;
	first = stacka[i];
	while (i < size)
	{
		stacka[i] = stacka[i + 1];
		i++;
	}
	stacka[i - 1] = first;
	ft_putstr("ra\n");
}

void	rb(int *stackb, int size)
{
	int	first;
	int	i;

	i = 0;
	first = stackb[i];
	while (i < size)
	{
		stackb[i] = stackb[i + 1];
		i++;
	}
	stackb[i - 1] = first;
	ft_putstr("rb\n");
}

void	rr(int *stacka, int *stackb, int size)
{
	ra(stacka, size);
	rb(stackb, size);
	ft_putstr("rr\n");
}

void	rra(int *stacka, int size)
{
	int	i;
	int	last;

	last = stacka[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stacka[i] = stacka[i - 1];
		i--;
	}
	stacka[0] = last;
	ft_putstr("rra\n");
}

void	rrb(int *stackb, int size)
{
	int	i;
	int	last;

	last = stackb[size - 1];
	i = size - 1;
	while (i > 0)
	{
		stackb[i] = stackb[i - 1];
		i--;
	}
	stackb[0] = last;
	ft_putstr("rrb\n");
}
