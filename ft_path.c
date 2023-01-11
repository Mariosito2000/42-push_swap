/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:43:53 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/11 17:02:05 by marias-e         ###   ########.fr       */
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
