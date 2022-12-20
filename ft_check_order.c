/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:27:08 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 15:31:57 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* Function that checks if a list is sorted in a decreasing order.
*
* Parameters:
* stack  -  list of int checked.
*
* Return values:
* 0 - list is SORTED
* 1 - list is NOT SORTED
*/
int	ft_check_order(t_list *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}
