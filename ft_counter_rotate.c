/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:00:35 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 17:37:06 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_counter_ra(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == rb || comp->content == rrb
			|| comp->content == sb || comp->content == rra
			|| comp->content == ra))
	{
		if (comp->content == rra)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_counter_rra(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == rb || comp->content == rrb
			|| comp->content == sb || comp->content == rra
			|| comp->content == ra))
	{
		if (comp->content == ra)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_counter_rb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == rb || comp->content == rrb
			|| comp->content == sa || comp->content == rra
			|| comp->content == ra))
	{
		if (comp->content == rrb)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}

void	ft_counter_rrb(t_list **iter)
{
	t_list	*comp;

	comp = (*iter)->next;
	while (comp && (comp->content == rb || comp->content == rrb
			|| comp->content == sa || comp->content == rra
			|| comp->content == ra))
	{
		if (comp->content == rb)
		{
			comp->content = 0;
			(*iter)->content = 0;
			return ;
		}
		comp = comp->next;
	}
}
