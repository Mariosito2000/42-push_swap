/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:16:29 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/11 12:37:21 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* Swaps the values between the two first contents of an int list.
*
* Parameters:
* stack - list of int to be swapped.
*/
void	ft_swap(t_list *stack)
{
	int		aux;
	size_t	index;
	size_t	group;

	if (stack->next)
	{
		aux = stack->content;
		stack->content = stack->next->content;
		stack->next->content = aux;
		index = stack->index;
		stack->index = stack->next->index;
		stack->next->index = index;
		group = stack->group;
		stack->group = stack->next->group;
		stack->next->group = group;
	}
}
