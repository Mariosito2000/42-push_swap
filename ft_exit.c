/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:19:57 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/16 15:26:30 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 
* Exit function.
*
*	0 - clean exit
*	1 - error exit
*
* Parameters:
* reason  -  Exit reason.
*/
void	ft_exit(int reason)
{
	if (reason == 0)
		exit(0);
	else if (reason == 1)
	{
		ft_printf("Error\n");
		exit(0);
	}
}
