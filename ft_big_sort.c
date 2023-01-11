/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:27:47 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/11 17:17:23 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_phase(t_list **stack_a, t_list **stack_b, t_list **mov,
	int current)
{
	int	moves;
	int	moves_big;

	moves = ft_path(stack_a, (size_t)current);
	moves_big = ft_path(stack_a, (size_t)current + 1);
	if (moves > moves_big)
		moves = moves_big;
	ft_rotator(stack_a, mov, moves);
	ft_push(stack_a, &stack_b);
	ft_lstadd_back(mov, ft_lstnew(pb));
	if ((*stack_b)->group == current && (*stack_b)->next->group == current + 1)
	{
		ft_lstadd_back(mov, ft_lstnew(rrb));
		ft_rev_rotate(stack_b);
	}
}

static int	ft_check_groups(t_list **stack_a, int current)
{
	t_list	*iter;

	iter = *stack_a;
	while (iter->next)
	{
		if (iter->group == (size_t)current || iter->group == ((size_t)current
				+ 1))
			return (0);
		iter->next;
	}
	return (1);
}

void	ft_big_sort(t_list **stack_a, int size)
{
	t_list	*mov;
	t_list	*stack_b;
	int		groups;
	int		current;

	current = 0;
	stack_b = 0;
	mov = ft_lstnew(0);
	if (size < 500)
		groups = 3;
	else
		groups = 7;
	ft_groups(stack_a, size / groups);
	while (current < groups - 1)
	{
		ft_push_phase(stack_a, &stack_b, &mov, current);
		if (ft_check_groups(stack_a, current))
			current += 2;
	}
	ft_last_push(stack_a, &stack_b, &mov);
	ft_sorty(stack_a, &mov);
	ft_return(stack_a, &stack_b, &mov, current);
	ft_manage_orders(&mov);
}
