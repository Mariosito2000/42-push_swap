/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:12:24 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 15:21:43 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_big_a(int b, int c, int d)
{
	if (b > c && b > d)
	{
		if (c > d)
			ft_printf("sa\nra\nra\nsa\n");
		else
			ft_printf("sa\nra\nra\n");
	}
	else if (c > b && c > d)
	{
		if (b > d)
			ft_printf("sa\nra\nsa\nra\nra\n");
		else
			ft_printf("ra\nra\nsa\nrra\n");
	}
	else
	{
		if (b > c)
			ft_printf("ra\nsa\n");
		else
			ft_printf("ra\n");
	}
	ft_exit(0);
}

static void	ft_big_b(int a, int c, int d)
{
	if (a > c && a > d)
	{
		if (c > d)
			ft_printf("ra\nra\nsa\n");
		else
			ft_printf("ra\nra\n");
	}
	else if (c > a && c > d)
	{
		if (a > d)
			ft_printf("ra\nsa\nrra\nrra\n");
		else
			ft_printf("ra\nsa\nrra\nrra\nsa\n");
	}
	else
	{
		if (a > c)
			ft_printf("rra\nsa\nrra\n");
		else
			ft_printf("sa\nra\n");
	}
	ft_exit(0);
}

static void	ft_big_c(int a, int b, int d)
{
	if (b > a && b > d)
	{
		if (a > d)
			ft_printf("rra\n");
		else
			ft_printf("rra\nsa\n");
	}
	else if (a > b && a > d)
	{
		if (b > d)
			ft_printf("sa\nrra\n");
		else
			ft_printf("sa\nrra\nsa\n");
	}
	else
	{
		if (b > a)
			ft_printf("ra\nra\nsa\nra\nra\n");
		else
			ft_printf("sa\nra\nra\nsa\nra\nra\n");
	}
	ft_exit(0);
}

static void	ft_big_d(int a, int b, int c)
{
	if (b > c && b > a)
	{
		if (c > a)
			ft_printf("ra\nsa\nrra\n");
		else
			ft_printf("ra\nsa\nrra\nsa\n");
	}
	else if (c > b && c > a)
	{
		if (a > b)
			ft_printf("sa\n");
	}
	else
	{
		if (b > c)
			ft_printf("rra\nsa\nra\nra\nsa\n");
		else
			ft_printf("sa\nra\nsa\nrra\n");
	}
	ft_exit(0);
}

/*
* Sorts a list of 4 numbers.
*/
void	ft_sort_4(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = (*stack_a)->content;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	d = (*stack_a)->next->next->next->content;
	if (a > b && a > c && a > d)
		ft_big_a(b, c, d);
	else if (b > a && b > c && b > d)
		ft_big_b(a, c, d);
	else if (c > a && c > b && c > d)
		ft_big_c(a, b, d);
	else if (d > a && d > b && d > c)
		ft_big_d(a, b, c);
}
