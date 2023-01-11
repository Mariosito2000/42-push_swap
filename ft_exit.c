/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:19:57 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/09 12:45:01 by marias-e         ###   ########.fr       */
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
		write(STDERR_FILENO, "Error\n", 6);
		exit(0);
	}
}
