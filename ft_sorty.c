/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:56:10 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/19 17:33:12 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_big_a(t_list **stack_a, t_list **mov, size_t *num)
{
	if (num[1] < num[2])
	{
		ft_rotate(stack_a);
		ft_lstadd_back(mov, ft_lstnew(ra));
	}
	else
	{
		ft_rotate(stack_a);
		ft_lstadd_back(mov, ft_lstnew(ra));
		ft_swap(stack_a);
		ft_lstadd_back(mov, ft_lstnew(sa));
	}
}

static void	ft_big_b(t_list **stack_a, t_list **mov, size_t *num)
{
	if (num[0] > num[2])
	{
		ft_rev_rotate(stack_a);
		ft_lstadd_back(mov, ft_lstnew(rra));
	}
	else
	{
		ft_rev_rotate(stack_a);
		ft_lstadd_back(mov, ft_lstnew(rra));
		ft_swap(stack_a);
		ft_lstadd_back(mov, ft_lstnew(sa));
	}
}

static void	ft_big_c(t_list **stack_a, t_list **mov, size_t *num)
{
	if (num[0] > num[1])
	{
		ft_swap(stack_a);
		ft_lstadd_back(mov, ft_lstnew(sa));
	}
}

void	ft_sorty(t_list **stack_a, t_list **mov)
{
	size_t	num[3];

	num[0] = (*stack_a)->index;
	num[1] = (*stack_a)->next->index;
	num[2] = (*stack_a)->next->next->index;
	if (num[0] > num[1] && num[0] > num[2])
		ft_big_a(stack_a, mov, num);
	else if (num[1] > num[0] && num[1] > num[2])
		ft_big_b(stack_a, mov, num);
	else
		ft_big_c(stack_a, mov, num);
}
