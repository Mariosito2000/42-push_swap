/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_aux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:51:56 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/23 17:38:15 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_general_path(t_list **stack_a, size_t index)
{
	t_list	*iter;
	int		n;
	int		r;

	n = 1;
	r = 1;
	iter = (*stack_a)->next;
	while (index < iter->prev->index || index > iter->index)
	{
		n++;
		iter = iter->next;
	}
	iter = ft_lstlast(*stack_a)->prev;
	while (index > iter->next->index || index < iter->index)
	{
		r++;
		iter = iter->prev;
	}
	if (n > r)
		return (-r);
	return (n);
}

int	ft_min_max(t_list **stack_a, size_t index)
{
	t_list	*iter;
	int		check[2];

	check[0] = 0;
	check[1] = 0;
	iter = *stack_a;
	while (iter)
	{
		if (iter->index < index)
			check[0]++;
		iter = iter->next;
	}
	iter = *stack_a;
	while (iter)
	{
		if (iter->index > index)
			check[1]++;
		iter = iter->next;
	}
	if (!check[1] || !check[0])
		return (1);
	return (0);
}

int	ft_path_mm(t_list **stack_a)
{
	int		n;
	int		r;
	t_list	*iter;

	n = 2;
	r = 1;
	iter = (*stack_a)->next;
	if (iter->index < ft_lstlast(iter)->index)
		return (0);
	while (iter->next && iter->index < iter->next->index)
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
		return (-r);
	return (n);
}
