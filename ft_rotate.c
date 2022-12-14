/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:07:17 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/13 17:03:01 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*aux;

	aux = *stack;
	ft_lstadd_back(stack, ft_lstnew((*stack)->content));
	*stack = (*stack)->next;
	(*stack)->prev = 0;
	free(aux);
}

void	ft_rev_rotate(t_list **stack)
{
	t_list	*aux;

	aux = ft_lstlast(*stack);
	ft_lstadd_front(stack, ft_lstnew(aux->content));
	aux->prev->next = 0;
	aux = 0;
}
