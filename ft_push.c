/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:38:52 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/11 11:11:17 by marias-e         ###   ########.fr       */
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

	aux = *source;
	if (!*dest)
	{
		*dest = ft_lstnew((*source)->content);
		(*dest)->index = (*source)->index;
		(*dest)->group = (*source)->group;
	}
	else
	{
		ft_lstadd_front(dest, ft_lstnew((*source)->content));
		(*dest)->index = (*source)->index;
		(*dest)->group = (*source)->group;
	}
	if ((*source)->next)
	{
		*source = (*source)->next;
		(*source)->prev = 0;
	}
	free(aux);
}
