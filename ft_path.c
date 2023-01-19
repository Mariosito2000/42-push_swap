/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:43:53 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/18 17:24:01 by marias-e         ###   ########.fr       */
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
