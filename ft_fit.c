/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:17:50 by marias-e          #+#    #+#             */
/*   Updated: 2023/02/08 17:15:51 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_top(t_list **stack_b, size_t index)
{
	int		n;
	int		r;
	t_list	*iter;

	n = 0;
	r = 1;
	iter = *stack_b;
	while (iter->index != index)
	{
		n++;
		iter = iter->next;
	}
	iter = ft_lstlast(*stack_b);
	while (iter->index != index)
	{
		r++;
		iter = iter->prev;
	}
	if (r < n)
		return (-r);
	return (n);
}

static void	ft_move(t_list **stack_a, t_list **stack_b, t_list **mov,
				int *move)
{
	ft_rotator_a(stack_a, mov, (move[5] * move[7]));
	if (ft_lstsize(*stack_b) > 1)
		ft_rotator_b(stack_b, mov, move[1] * move[3]);
	ft_push(stack_b, stack_a);
	ft_lstadd_back(mov, ft_lstnew(pa));
}

/*
move[0] - Mov en B de iter
move[1] - Mov en B del mejor
move[2] - Signo en B de iter
move[3] - Signo en B del mejor
move[4] - Mov en A de iter
move[5] - Mov en A del mejor
move[6] - Signo en A del iter 
move[7] - Signo en A del mejor
*/
void	ft_fit(t_list **stack_a, t_list **stack_b, t_list **mov,
				size_t current)
{
	t_list	*iter;
	int		move[8];

	move[1] = -1;
	move[5] = -1;
	iter = *stack_b;
	while (iter)
	{
		if (iter->group == current)
		{
			move[0] = ft_top(stack_b, iter->index);
			if (move[0] < 0)
			{
				move[0] = move[0] * -1;
				move[2] = -1;
			}
			else
				move[2] = 1;
			move[4] = ft_fastest_path(stack_a, iter->index);
			if (move[4] < 0)
			{
				move[4] = move[4] * -1;
				move[6] = -1;
			}
			else
				move[6] = 1;
			if (move[1] == -1 || (move[1] + move[5]) > (move[0] + move[4]))
			{
				move[1] = move[0];
				move[3] = move[2];
				move[5] = move[4];
				move[7] = move[6];
			}
		}
		iter = iter->next;
	}
	ft_move(stack_a, stack_b, mov, move);
}
