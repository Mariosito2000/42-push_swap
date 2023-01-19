/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:28:59 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/19 12:20:49 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_groups(t_list **stack_b, size_t current)
{
	t_list	*iter;

	iter = *stack_b;
	while (iter)
	{
		ft_printf("GROUP\n");
		if (iter->group >= current)
			return (0);
		iter = iter->next;
	}
	return (1);
}

static void	ft_fit(t_list **stack_a, t_list **stack_b, t_list **mov)
{
	int	n;

	n = 0;
	while ((*stack_b)->index > (*stack_a)->index)
	{
		ft_rotate(stack_a);
		ft_lstadd_back(mov, ft_lstnew(ra));
		n++;
	}
	ft_push(stack_b, stack_a);
	ft_lstadd_back(mov, ft_lstnew(pa));
	while (n)
	{
		ft_rev_rotate(stack_a);
		ft_lstadd_back(mov, ft_lstnew(rra));
		n--;
	}
}

void	ft_return(t_list **stack_a, t_list **stack_b, t_list **mov,
			size_t current)
{
	while (*stack_b)
	{
		printf("current = %zu\n", current);
		ft_printf("A\n");
		ft_print_lista(stack_a);
		ft_printf("B\n");
		ft_print_lista(stack_b);
		if (current != (*stack_b)->group && ft_lstsize(*stack_b) > 2)
		{
			ft_printf("SIZE\n");
			ft_rev_rotate(stack_b);
			ft_lstadd_back(mov, ft_lstnew(rrb));
		}
		ft_fit(stack_a, stack_b, mov);
		ft_printf("X\n");
		if (ft_check_groups(stack_b, current))
			current--;
	}
	ft_printf("Z\n");
}
