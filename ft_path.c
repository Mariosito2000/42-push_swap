/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:43:53 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/25 13:35:22 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_path(t_list **stack_a, size_t group)
{
	int		dist;
	int		rdist;
	t_list	*iter;

	iter = *stack_a;
	dist = 0;
	rdist = 1;
	while (iter->group != group && iter->next)
	{
		dist++;
		iter = iter->next;
	}
	iter = ft_lstlast(*stack_a);
	while (iter->group != group && iter->prev)
	{
		rdist++;
		iter = iter->prev;
	}
	if (dist <= rdist)
		return (dist);
	else
		return (-rdist);
}

int	ft_absolute_moves(int moves, int moves_big)
{
	if (moves < 0)
		moves = moves * -1;
	if (moves_big < 0)
		moves_big = moves_big * -1;
	if (moves > moves_big)
		return (1);
	return (0);
}

void	ft_rotator_b(t_list **stack_b, t_list **mov, int moves)
{
	if (moves < 0)
	{
		moves = -moves;
		while (moves > 0)
		{
			ft_rev_rotate(stack_b);
			ft_lstadd_back(mov, ft_lstnew(rrb));
			moves--;
		}
	}
	else
	{
		while (moves > 0)
		{
			ft_rotate(stack_b);
			ft_lstadd_back(mov, ft_lstnew(rb));
			moves--;
		}
	}
}

int	ft_fastest_path_b(t_list **stack_b, size_t index, size_t last)
{
	int		n[2];
	t_list	*iter;

	iter = *stack_b;
	if ((((iter->index < index && iter->index < last) || (
					iter->index > index && iter->index > last)
			) && last > index) || (iter->index < index && iter->index > last))
		return (0);
	n[0] = 1;
	n[1] = 1;
	iter = iter->next;
	while (iter->next && (iter->index > index || iter->index < last))
	{
		n[0]++;
		iter = iter->next;
	}
	iter = ft_lstlast(*stack_b);
	while (iter->prev && (iter->index > index || iter->index < last))
	{
		n[1]++;
		iter = iter->prev;
	}
	if (n[0] > n[1])
		return (-(n[1]));
	return (n[0]);
}
