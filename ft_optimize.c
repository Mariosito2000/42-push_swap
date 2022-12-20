/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:01:38 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 13:48:01 by marias-e         ###   ########.fr       */
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
void	ft_optimize(t_list **movements)
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
