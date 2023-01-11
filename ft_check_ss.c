/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:01:16 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 17:34:55 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_sa(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && comp->content != pa && comp->content != pb && \
		comp->content != rb && comp->content != rrb)
	{
		if (comp->content == sb)
		{
			(*iter)->content = ss;
			comp->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_check_sb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && comp->content != pa && comp->content != pb && \
		comp->content != ra && comp->content != rra)
	{
		if (comp->content == sa)
		{
			(*iter)->content = ss;
			comp->content = 0;
			return ;
		}
		comp = comp->next;
	}
}
