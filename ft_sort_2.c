/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:12:10 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/13 13:18:20 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_printf("sa\n");
	ft_exit(0);
}
