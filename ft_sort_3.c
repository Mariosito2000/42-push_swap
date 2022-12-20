/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:53:13 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 15:21:28 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_big_a(int b, int c)
{
	if (b > c)
		ft_printf("ra\nsa\n");
	else
		ft_printf("ra\n");
	ft_exit(0);
}

static void	ft_big_b(int a, int c)
{
	if (a > c)
		ft_printf("rra\n");
	else
		ft_printf("rra\nsa\n");
	ft_exit(0);
}

static void	ft_big_c(int a, int b)
{
	if (a > b)
		ft_printf("sa\n");
	ft_exit(0);
}

/*
* Sorts a list of 3 numbers.
*/
void	ft_sort_3(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if (a > b && a > c)
		ft_big_a(b, c);
	else if (b > a && b > c)
		ft_big_b(a, c);
	else if (c > a && c > b)
		ft_big_c(a, b);
}
