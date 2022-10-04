/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboualam <mboualam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:40:29 by mboualam          #+#    #+#             */
/*   Updated: 2022/10/04 17:19:08 by mboualam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_element
{
	int		*a;
	int		*b;
	int		*stack_a_indexi;
	int		*cpy;
	int		check_sort;
	int		size;
	long	*temp;
}t_elements;

typedef struct t_utils
{
	int	min;
	int	max;
	int	mid;
	int count_top;
	int count_bottom;
	int pos;
	int p;

}t_utils;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(char *str);
void	check_digit(char *str);
void	check_duplicate(int *digit, int argc);
void	ft_putnbr(int nb);
void	aff(int *nb, int argc);
void	get_stacktemp_a(int *stacka, char **ar_gv, int size);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		done_sorted(int *stacka, int size);
long	ft_atoi(char *s1);
void	all_operation(int *tmp);
void	sa(int *nb);
void	sb(int *stackb);
void	pop_stack(int **stacka, int size);
void	push_stack(int *stacka, int *stackb, int size);
void	ra(int *stacka, int size);
void	rb(int *stackb, int size);
void	rra(int *stacka, int size);
void	rrb(int *stackb, int size);
void	ss(int *stacka, int *stackb);
void	rr(int *stacka, int *stackb, int size);
void	rrr(int *stacka, int *stackb, int size);
void	put_in_top_min2(int *stacka, int size);
void	put_in_top_min1(int *stacka, int size);
void	put_in_top_max(int *stacka, int size);
int		min_number(int *stacka, int size);
int		max_number(int *stacka, int size);
void	deux_nombres(int *a);
void	trois_numbers(int *stacka, int size);
void	quatre(int **stacka, int *stackb, int size);
void	cinq(int **stacka, int *stackb, int size);
void	cinq_cents(int *stacka, int *stackb, int size);
void	indexi(int *stacka, int *stackcpy , int *stackindixi, int size);
void	copy_stack(int *stacka, int *copy_stacka, int size);
void	sorted_stack(int *stack, int size);
int		get_div(int y, int j);
void	smart_push(int ***stack_a, int *stack_b, int z, int p, int size);
int		push(int **stacka, int *stackb, int mid, int p, int size);
void	put_top_minval(int *stacka, int size);
void	tt(int *stacka, int size ,int count_top, int count_bottom);
#endif
