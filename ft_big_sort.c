/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:27:47 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/24 11:30:41 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotator_a(t_list **stack_a, t_list **mov, int moves)
{
	if (moves < 0)
	{
		moves = -moves;
		while (moves > 0)
		{
			ft_rev_rotate(stack_a);
			ft_lstadd_back(mov, ft_lstnew(rra));
			moves--;
		}
	}
	else
	{
		while (moves > 0)
		{
			ft_rotate(stack_a);
			ft_lstadd_back(mov, ft_lstnew(ra));
			moves--;
		}
	}
}

static void	ft_push_phase(t_list **stack_a, t_list **stack_b, t_list **mov,
	int current)
{
	int	moves;
	int	moves_big;

	moves = ft_path(stack_a, current);
	moves_big = ft_path(stack_a, current + 1);
	if (ft_absolute_moves(moves, moves_big))
		moves = moves_big;
	ft_rotator_a(stack_a, mov, moves);
	ft_push(stack_a, stack_b);
	ft_lstadd_back(mov, ft_lstnew(pb));
	if ((*stack_b)->next && (*stack_b)->group == (size_t)
		current && (*stack_b)->next->group != (size_t)current)
	{
		ft_rotate(stack_b);
		ft_lstadd_back(mov, ft_lstnew(rb));
	}
}

static int	ft_check_groups(t_list **stack_a, size_t current)
{
	t_list	*iter;

	iter = *stack_a;
	while (iter)
	{
		if (iter->group == current || iter->group == current + 1)
			return (0);
		iter = iter->next;
	}
	return (1);
}

static void	ft_last_push(t_list **stack_a, t_list **stack_b, t_list **mov)
{
	int	left;

	left = ft_lstsize(*stack_a);
	while (left > 3)
	{
		ft_push(stack_a, stack_b);
		ft_lstadd_back(mov, ft_lstnew(pb));
		left--;
	}
}

void	ft_big_sort(t_list **stack_a, int size)
{
	t_list	*mov;
	t_list	*stack_b;
	size_t	groups;
	size_t	current;

	current = 0;
	stack_b = 0;
	mov = ft_lstnew(0);
	if (size < 500)
		groups = 3;
	else
		groups = 7;
	ft_groups(stack_a, (float)size / (float)groups);
	while (current < groups - 1 && ft_lstsize(*stack_a) > 3)
	{
		ft_push_phase(stack_a, &stack_b, &mov, current);
		if (ft_check_groups(stack_a, current))
			current += 2;
	}
	ft_last_push(stack_a, &stack_b, &mov);
	ft_sorty(stack_a, &mov);
	ft_return(stack_a, &stack_b, &mov, groups - 1);
	ft_manage_orders(&mov);
	ft_exit(0);
}
