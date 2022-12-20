/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:01:38 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 13:07:54 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_ra(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && comp->content != pa && comp->content != pb && \
		comp->content != sb && comp->content != rrb)
	{
		if (comp->content == rb)
		{
			(*iter)->content = rr;
			if (comp->next)
				comp->next->prev = comp->prev;
			comp->prev->next = comp->next;
			free(comp);
			return ;
		}
		comp = comp->next;
	}
}

void	ft_check_rb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && comp->content != pa && comp->content != pb && \
		comp->content != sa && comp->content != rra)
	{
		if (comp->content == ra)
		{
			(*iter)->content = rr;
			if (comp->next)
				comp->next->prev = comp->prev;
			comp->prev->next = comp->next;
			free(comp);
			return ;
		}
		comp = comp->next;
	}
}
