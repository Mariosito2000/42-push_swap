/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:34:16 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 13:38:29 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_index(int num, t_list *stack_a)
{
	size_t	index;

	index = 1;
	while (stack_a)
	{
		if (stack_a->content < num)
			index++;
		stack_a = stack_a->next;
	}
	return (index);
}

void	ft_normalize(t_list	**stack_a)
{
	t_list	*iter;

	iter = (*stack_a);
	while (iter)
	{
		iter->index = ft_index(iter->content, *stack_a);
		iter = iter->next;
	}
}
