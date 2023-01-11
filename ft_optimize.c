/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:01:38 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 17:22:31 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* Checks if there is a possible conversion from 2 simultaneous movements
* to a single double movement.
*
* sa + sb = ss
* ra + rb = rr
* rra + rrb = rrr
* 
* Parameters:
* movements - List of movements calculated by the algorithm.
*/
void	ft_optimize_doubles(t_list **movements)
{
	t_list	*iter;

	iter = (*movements);
	while (iter)
	{
		if (iter->content == sa)
			ft_check_sa(&iter);
		else if (iter->content == sb)
			ft_check_sb(&iter);
		else if (iter->content == ra)
			ft_check_ra(&iter);
		else if (iter->content == rb)
			ft_check_rb(&iter);
		else if (iter->content == rra)
			ft_check_rra(&iter);
		else if (iter->content == rrb)
			ft_check_rrb(&iter);
		iter = iter->next;
	}
}

/*
* Checks if there are 2 opposite movements and suppress them if possible
*
* sa - sa
* sb - sb
* pa - pb
* pb - pa
* ra - rra
* rra - ra
* rb - rrb
* rrb - rb 
*
* Parameters:
* movements - List of movements calculated by the algorithm.
*/
void	ft_optimize_counter(t_list **movements)
{
	t_list	*iter;

	iter = (*movements);
	while (iter)
	{
		if (iter->content == sa)
			ft_counter_sa(&iter);
		if (iter->content == sb)
			ft_counter_sb(&iter);
		if (iter->content == pa)
			ft_counter_pa(&iter);
		if (iter->content == pb)
			ft_counter_pb(&iter);
		if (iter->content == ra)
			ft_counter_ra(&iter);
		if (iter->content == rra)
			ft_counter_rra(&iter);
		if (iter->content == rb)
			ft_counter_rb(&iter);
		if (iter->content == rrb)
			ft_counter_rrb(&iter);
		iter = iter->next;
	}
}
