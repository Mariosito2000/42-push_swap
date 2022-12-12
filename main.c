/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:13:19 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/12 13:35:46 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	int		i;

	if (argc == 1)
		ft_exit(1);
	stack_a = 0;
	i = 0;
	ft_arg_manager(argv, argc, &stack_a);
	while (stack_a)
	{
		printf("N = %d\n", stack_a->content);
		stack_a = stack_a->next;
	}
	return (0);
}
