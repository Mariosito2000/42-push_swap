/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:16:29 by marias-e          #+#    #+#             */
/*   Updated: 2023/02/10 13:42:49 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* Swaps the values between the two first contents of an int list.
*
* Parameters:
* stack - list of int to be swapped.
*/
void	ft_swap(t_list **stack)
{
	t_list	*aux;

	if (stack && ft_lstsize(*stack) > 1)
	{
		aux = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = 0;
		aux->next = (*stack)->next;
		aux->prev = (*stack);
		(*stack)->next = aux;
		if (aux->next)
			aux->next->prev = aux;
	}
}

void	ft_swap_both(t_list **stack_a, t_list **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}
