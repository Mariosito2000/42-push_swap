/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:34:16 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/17 12:58:29 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_index(int num, t_list *stat)
{
	size_t	index;

	index = 0;
	while (stat)
	{
		if (stat->content < num)
			index++;
		stat = stat->next;
	}
	return (index);
}

void	ft_normalize(t_list	**stack_a)
{
	t_list	*iter;
	t_list	*stat;

	iter = (*stack_a);
	while (iter)
	{
		stat = (*stack_a);
		iter->index = ft_index(iter->content, stat);
		iter = iter->next;
	}
}
