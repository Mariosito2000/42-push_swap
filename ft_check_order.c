/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:27:08 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/12 14:38:26 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
