/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:25:05 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/04 17:33:36 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_elements	dt;

	dt.size = argc - 1;
	dt.a = (int *)malloc(sizeof(int) * (dt.size));
	dt.b = (int *)malloc(sizeof(int) * (dt.size));
	dt.cpy = (int *)malloc(sizeof(int) * (dt.size));
	dt.stack_a_indexi = (int *)malloc(sizeof(int) * (dt.size));
	get_stacktemp_a(dt.a, argv, dt.size);
	check_duplicate(dt.a, dt.size);
	dt.check_sort = done_sorted(dt.a, dt.size);
	if (dt.check_sort == 1)
		exit(0);
	copy_stack(dt.a, dt.cpy, dt.size);
	indexi(dt.a, dt.cpy, dt.stack_a_indexi,dt.size);
	// printf("\033[0;32m Avant Stack A => \033[0m\n");
	// aff(dt.a, dt.size);
	// printf("\n");
	if (dt.size == 2)
		deux_nombres(dt.a);
	else if (dt.size == 3)
		trois_numbers(dt.a, dt.size);
	else if (dt.size == 4)
		quatre(&dt.a, dt.b, dt.size);
	else if (dt.size == 5)
		cinq(&dt.a, dt.b, dt.size);
	else if (dt.size > 5)
	{
		put_top_minval(dt.stack_a_indexi, dt.size);
		// printf("\033[0;31m Apres Stack A => \033[0m\n");
		aff(dt.stack_a_indexi, dt.size);
	}
	// system("leaks push_swap");
	// printf("\033[0;31m Apres Stack A => \033[0m\n");
	// aff(dt.a, dt.size);
	return (0);
}
