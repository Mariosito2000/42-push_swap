/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_push_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:43:10 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 17:37:34 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_counter_pa(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == pb || comp->content == pa))
	{
		if (comp->content == pb)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_counter_pb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == pb || comp->content == pa))
	{
		if (comp->content == pa)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_counter_sa(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == rb || comp->content == rrb
			|| comp->content == sb))
	{
		if (comp->content == sa)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_counter_sb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == ra || comp->content == rra
			|| comp->content == sa))
	{
		if (comp->content == sb)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}
