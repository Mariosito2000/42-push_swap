/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:28:59 by marias-e          #+#    #+#             */
/*   Updated: 2023/02/08 17:00:18 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_fastest_path(t_list **stack_a, size_t index)
{
	if ((*stack_a)->index > index && ft_lstlast(*stack_a)->index < index)
		return (0);
	if (ft_min_max(stack_a, index))
		return (ft_path_mm(stack_a));
	return (ft_general_path(stack_a, index));
}

static int	ft_check_groups(t_list **stack_b, size_t current)
{
	t_list	*iter;

	iter = *stack_b;
	while (iter)
	{
		if (iter->group == current)
			return (0);
		iter = iter->next;
	}
	return (1);
}

static void	ft_fix_order(t_list **stack_a, t_list **mov)
{
	int		n;
	int		r;
	t_list	*iter;

	n = 1;
	r = 1;
	iter = (*stack_a);
	if (!ft_check_order(*stack_a))
		return ;
	while (iter->index < iter->next->index)
	{
		n++;
		iter = iter->next;
	}
	iter = ft_lstlast(*stack_a);
	while (iter->index > iter->prev->index)
	{
		r++;
		iter = iter->prev;
	}
	if (n > r)
		ft_rotator_a(stack_a, mov, -r);
	else
		ft_rotator_a(stack_a, mov, n);
}

void	ft_return(t_list **stack_a, t_list **stack_b, t_list **mov,
			size_t current)
{
	while (*stack_b)
	{
		while (ft_check_groups(stack_b, current))
			current--;
		ft_fit(stack_a, stack_b, mov, current);
	}
	ft_fix_order(stack_a, mov);
}
