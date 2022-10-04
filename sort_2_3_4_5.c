/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3_4_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:59:19 by mboualam          #+#    #+#             */
/*   Updated: 2022/09/29 04:45:19 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	deux_nombres(int *a)
{
	if (a[1] < a[0])
		sa(a);
}

void	trois_numbers(int *stacka, int size)
{
	if ((stacka[0] > stacka[1]) && (stacka[0] > stacka[2]))
		ra(stacka, size);
	if ((stacka[0] < stacka[1]) && (stacka[1] > stacka[2]))
	{
		sa(stacka);  
		ra(stacka, size);
	}
	if (stacka[1] < stacka[0])
		sa(stacka);
	if ((stacka[2] < stacka[1]) && (stacka[2] < stacka[0]))
		rra(stacka, size);
}

void	cinq(int **stacka, int *stackb, int size)
{
	put_in_top_min2(*stacka, size);
	push_stack(*stacka, stackb, size);
	pop_stack(stacka, size);
	ft_putstr("pb\n");
	quatre(stacka, stackb, size - 1);
	push_stack(stackb, *stacka, size);
	pop_stack(stacka, size);
	ft_putstr("pa\n");
}

void	quatre(int **stacka, int *stackb, int size)
{
	put_in_top_min1(*stacka, size);
	push_stack(*stacka, stackb, size);
	pop_stack(stacka, size);
	ft_putstr("pb\n");
	trois_numbers(*stacka, size - 1);
	push_stack(stackb, *stacka, size);
	pop_stack(stacka, size);
	ft_putstr("pa\n");
}
