/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:07:17 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/18 16:27:34 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* Rotates the list passed as parameter, all nodes advance one position and the
* first one moves to the last position.
*
* Parameters :
* stack  -  a pointer to the first node of the list.
*/
void	ft_rotate(t_list **stack)
{
	*stack = (*stack)->next;
	ft_lstadd_back(stack, (*stack)->prev);
	(*stack)->prev = 0;
}

/*
* Rotates the list passed as parameter, all nodes go back one position and the
* last one moves to the first position.
*
* Parameters :
* stack  -  a pointer to the first node of the list.
*/
void	ft_rev_rotate(t_list **stack)
{
	t_list	*aux;

	aux = ft_lstlast(*stack);
	aux = aux->prev;
	ft_lstadd_front(stack, aux->next);
	aux->next = 0;
}
