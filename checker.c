/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:24:59 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/03 16:25:05 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && !ft_isdigit(str[i + 1]))
			ft_error("Error\n");
		if (!ft_isdigit(str[i]) && str[i] != '-')
			ft_error("Error\n");
		i++;
	}
	if (i > 12)
		ft_error("Error\n");
}

void	check_duplicate(int *digit, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (digit[i] == digit[j])
				ft_error("Error\n");
			j++;
		}
		i++;
	}
}

void	aff(int *nb, int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("%d\n",nb[i]);
		i++;
	}
}
