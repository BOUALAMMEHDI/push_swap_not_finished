/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 04:52:28 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/02 08:05:19 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted_stack(int *stack, int size)
{
	int i;
	int j;
	int temp;
	
	i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(stack[i] > stack[j])
			{
				temp = stack[i];
				stack[i] = stack[j];
				stack[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	copy_stack(int *stacka, int *copy_stacka, int size)
{
	int i;
	
	i = 0;
	while(i < size)
	{
		copy_stacka[i] = stacka[i];
		i++;
	}
	sorted_stack(copy_stacka, size);
}


void	indexi(int *stacka, int *stackcpy , int *stackindixi, int size)
{
	int i;
	int j;
	int index;

	i = 0;
	j = 0;
	index = 0;

	while(i < size)
	{
		while(j < size)
		{
			if(stacka[j] == stackcpy[i])
				stackindixi[j] = index;
			j++;
		}
		j = 0;
		i++;
		index++;
	}
}