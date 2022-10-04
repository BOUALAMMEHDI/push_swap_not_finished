/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_500.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:05:02 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/04 17:32:13 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tt(int *stacka, int size ,int count_top, int count_bottom)
{
	if(count_top < count_bottom)
	{
		while (count_top > 0)
		{
			ra(stacka, size);
			count_top--;
		}		
	}
	else
	{
		while (count_bottom >= 0)
		{
			rra(stacka, size);
			count_bottom--;
		}
	}
	if(count_top == 0 || count_bottom == 0)
		return;
}

void	put_top_minval(int *stacka, int size)
{
	int i; 
	t_utils tls;
	
	i = 0;
	tls.pos = 0;
	tls.count_top = 0;
	tls.count_bottom = 0;
	while(i < size)
	{
		if(stacka[i] == stacka[min_number(stacka, size)])
		{
			tls.pos = i;
			while(tls.pos > 0)
			{
				tls.count_top++;
				tls.pos--;
			}
			tls.pos = i + 1;
			while(tls.pos < size)
			{
				tls.count_bottom++;
				tls.pos++;
			}
			tt(stacka, size, tls.count_top, tls.count_bottom);
		}
		i++;
	}
}