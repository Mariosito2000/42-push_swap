/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_groups.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:52:15 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/11 12:58:04 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_groups(t_list **stack_a, int size)
{
	int		size;
	t_list	*iter;

	iter = *stack_a;
	while (iter->next)
	{
		iter->group = iter->index / (size_t)size;
		iter = iter->next;
	}
}
