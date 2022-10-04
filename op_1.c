/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:40:32 by mboualam          #+#    #+#             */
/*   Updated: 2022/09/29 20:00:32 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *stacka)
{
	int	temp;

	temp = stacka[0];
	stacka[0] = stacka[1];
	stacka[1] = temp;
	ft_putstr("sa\n");
}

void	sb(int *stackb)
{
	int	temp;

	temp = stackb[0];
	stackb[0] = stackb[1];
	stackb[1] = temp;
	ft_putstr("sb\n");
}

void	ss(int *stacka, int *stackb)
{
	sa(stacka);
	sb(stackb);
	ft_putstr("ss\n");
}

void	push_stack(int *stacka, int *stackb, int size)
{
	int i;
	
	i = size - 1;
	while (i > 0)
	{
		stackb[i] = stackb[i - 1];
		i--;
	}
	stackb[0] = stacka[0];
}

void  pop_stack(int **stacka, int size)
{
	int *tmp;
	int i;

	tmp = (int *)malloc(sizeof(int) * (size - 1));
	i = 0;
	while(i < size - 1)
	{
		tmp[i] = (*stacka)[i + 1];
		i++;
	}
	free(*stacka);
	*stacka = tmp;
}
