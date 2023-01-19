/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:38:52 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/19 11:55:08 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
* Moves the first int of the SOURCE list to the front of the DEST list.
*
* Parameters:
* source  -  list of int that contains the number to be moved
* dest  -  list thats receiving the number
*/
void	ft_push(t_list **source, t_list **dest)
{
	t_list	*aux;

	if (!*dest)
	{
		*dest = *source;
		*source = (*source)->next;
		(*dest)->next = 0;
	}
	else
	{
		aux = *source;
		if ((*source)->next)
		{
			*source = (*source)->next;
			ft_lstadd_front(dest, (*source)->prev);
			(*source)->prev = 0;
		}
		else
		{
			ft_lstadd_front(dest, *source);
			*source = 0;
		}
	}
}
