/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rrr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:02:25 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 13:06:21 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_rra(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && comp->content != pa && comp->content != pb && \
		comp->content != sb && comp->content != rb)
	{
		if (comp->content == rrb)
		{
			(*iter)->content = rrr;
			if (comp->next)
				comp->next->prev = comp->prev;
			comp->prev->next = comp->next;
			free(comp);
			return ;
		}
		comp = comp->next;
	}
}

void	ft_check_rrb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && comp->content != pa && comp->content != pb && \
		comp->content != sa && comp->content != ra)
	{
		if (comp->content == rra)
		{
			(*iter)->content = rrr;
			if (comp->next)
				comp->next->prev = comp->prev;
			comp->prev->next = comp->next;
			free(comp);
			return ;
		}
		comp = comp->next;
	}
}
