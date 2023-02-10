/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:52:56 by marias-e          #+#    #+#             */
/*   Updated: 2023/02/10 12:53:04 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_execute_order(char *buffer, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strncmp(buffer, "sa\n", 3))
		ft_swap(stack_a);
	else if (!ft_strncmp(buffer, "sb\n", 4))
		ft_swap(stack_b);
	else if (!ft_strncmp(buffer, "ss\n", 4))
		ft_swap_both(stack_a, stack_b);
	else if (!ft_strncmp(buffer, "pa\n", 4))
		ft_push(stack_b, stack_a);
	else if (!ft_strncmp(buffer, "pb\n", 4))
		ft_push(stack_a, stack_b);
	else if (!ft_strncmp(buffer, "ra\n", 4))
		ft_rotate(stack_a);
	else if (!ft_strncmp(buffer, "rb\n", 4))
		ft_rotate(stack_b);
	else if (!ft_strncmp(buffer, "rr\n", 4))
		ft_rotate_both(stack_a, stack_b);
	else if (!ft_strncmp(buffer, "rra\n", 5))
		ft_rev_rotate(stack_a);
	else if (!ft_strncmp(buffer, "rrb\n", 5))
		ft_rev_rotate(stack_b);
	else if (!ft_strncmp(buffer, "rrr\n", 5))
		ft_rev_rotate_both(stack_a, stack_b);
	else
		ft_exit(1);
}

void	ft_receive_orders(t_list **stack_a)
{
	t_list	*stack_b;
	char	*buffer;

	stack_b = 0;
	buffer = get_next_line(0);
	while (buffer)
	{
		ft_execute_order(buffer, stack_a, &stack_b);
		buffer = get_next_line(0);
	}
	if (!ft_lstsize(stack_b) && !ft_check_order(*stack_a))
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
	ft_exit(0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	if (argc == 1)
		ft_exit(0);
	stack_a = 0;
	ft_arg_manager(argv, argc, &stack_a);
	printf("A\n");
	ft_print_lista(&stack_a);
	ft_receive_orders(&stack_a);
	ft_exit(0);
}

//PROTEGER FUNCIONES