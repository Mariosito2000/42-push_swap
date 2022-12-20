/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:13:19 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/20 16:16:54 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		ft_exit(1);
	stack_a = 0;
	stack_b = 0;
	ft_arg_manager(argv, argc, &stack_a);
	ft_normalize(&stack_a);
	if (!ft_check_order(stack_a))
		ft_exit(0);
	ft_sort_selector(ft_lstsize(stack_a), &stack_a);
	printf("A\n");
	while (stack_a)
	{
		printf("N = %zu\n", stack_a->index);
		stack_a = stack_a->next;
	}
	printf("B\n");
	while (stack_b)
	{
		printf("N = %d\n", stack_b->content);
		stack_b = stack_b->next;
	}
	ft_exit(0);
}
