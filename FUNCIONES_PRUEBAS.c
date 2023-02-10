/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FUNCIONES_PRUEBAS.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:52:21 by marias-e          #+#    #+#             */
/*   Updated: 2023/02/08 11:23:58 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_lista(t_list **stack)
{
	t_list	*iter;

	iter = *stack;
	while (iter)
	{
		printf("I = %zu | G = %zu | N = %d\n", iter->index,
			iter->group, iter->content);
		iter = iter->next;
	}
}
