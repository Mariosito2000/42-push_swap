/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:13:19 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/13 17:29:16 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	if (argc == 1)
		ft_exit(1);
	stack_a = 0;
	ft_arg_manager(argv, argc, &stack_a);
	if (!ft_check_order(stack_a))
		ft_exit(0);
	ft_normalize(&stack_a);
	if (!ft_check_order(stack_a))
		ft_exit(0);
	ft_sort_selector(ft_lstsize(stack_a), &stack_a);
	ft_exit(0);
}
