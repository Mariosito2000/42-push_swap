/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:38:52 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/12 14:57:26 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **source, t_list **dest)
{
	t_list	*aux;

	aux = *source;
	if (!*dest)
		*dest = ft_lstnew((*source)->content);
	else
		ft_lstadd_front(dest, ft_lstnew((*source)->content));
	if ((*source)->next)
		*source = (*source)->next;
	else
		*source = 0;
	free(aux);
}
