/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:59:50 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 15:47:56 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_interpreter(int code)
{
	if (code == sa)
		ft_printf("sa\n");
	if (code == sb)
		ft_printf("sb\n");
	if (code == ss)
		ft_printf("ss\n");
	if (code == pa)
		ft_printf("pa\n");
	if (code == pb)
		ft_printf("pb\n");
	if (code == ra)
		ft_printf("ra\n");
	if (code == rb)
		ft_printf("rb\n");
	if (code == rr)
		ft_printf("rr\n");
	if (code == rra)
		ft_printf("rra\n");
	if (code == rrb)
		ft_printf("rrb\n");
	if (code == rrr)
		ft_printf("rrr\n");
}

/*
* Function that reads the movements list and prints the correspondent order.
*
* Parameters:
* movements  -  list of int that contains coded sorting movements
*/
void	ft_translator(t_list *movements)
{
	while (movements)
	{
		ft_interpreter(movements->content);
		movements = movements->next;
	}
}
