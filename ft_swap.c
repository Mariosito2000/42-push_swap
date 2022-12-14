/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:16:29 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/12 15:09:09 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list *stack)
{
	int	aux;

	aux = stack->content;
	stack->content = stack->next->content;
	stack->next->content = aux;
}

void	ft_double_swap(t_list *stack_a, t_list *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}
