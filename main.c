/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:13:19 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/13 13:18:43 by marias-e         ###   ########.fr       */
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
	ft_sort_selector(ft_lstsize(stack_a), &stack_a);
	printf("A\n");
	while (stack_a)
	{
		printf("N = %d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	ft_exit(0);
}
