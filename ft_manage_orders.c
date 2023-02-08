/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_orders.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:28:21 by marias-e          #+#    #+#             */
/*   Updated: 2023/02/08 16:41:28 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_manage_orders(t_list **mov)
{
	ft_optimize_counter(mov);
	ft_optimize_doubles(mov);
	ft_translator(*mov);
}
