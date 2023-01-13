/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:13:54 by marias-e          #+#    #+#             */
/*   Updated: 2023/01/13 14:08:42 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "Libft/miniLibft_sl/libft.h"
# include "Libft/get_next_line_sl/get_next_line.h"
# include "Libft/ft_printf_sl/ft_printf.h"

enum	e_movements
{
	sa = 1,
	sb = 2,
	ss = 3,
	pa = 4,
	pb = 5,
	ra = 6,
	rb = 7,
	rr = 8,
	rra = 9,
	rrb = 10,
	rrr = 11
};

void		ft_exit(int reason);

void		ft_free_split(char	**array);
void		ft_arg_manager(char **argv, int argc, t_list **stack_a);

void		ft_normalize(t_list	**stack_a);
int			ft_check_order(t_list *stack);

void		ft_push(t_list **source, t_list **dest);
void		ft_swap(t_list *list);
void		ft_rotate(t_list **stack);
void		ft_rev_rotate(t_list **stack);

void		ft_sort_selector(int size, t_list **stack_a);

void		ft_sort_2(t_list **stack_a);
void		ft_sort_3(t_list **stack_a);
void		ft_sort_4(t_list **stack_a);

void		ft_big_sort(t_list **stack_a, int size);
void		ft_groups(t_list **stack_a, int size);
int			ft_path(t_list **stack_a, size_t group);

void		ft_optimize_counter(t_list **movements);
void		ft_counter_pa(t_list **iter);
void		ft_counter_pb(t_list **iter);
void		ft_counter_sa(t_list **iter);
void		ft_counter_sb(t_list **iter);
void		ft_counter_ra(t_list **iter);
void		ft_counter_rra(t_list **iter);
void		ft_counter_rb(t_list **iter);
void		ft_counter_rrb(t_list **iter);

void		ft_optimize_doubles(t_list **movements);
void		ft_check_sa(t_list **iter);
void		ft_check_sb(t_list **iter);
void		ft_check_ra(t_list **iter);
void		ft_check_rb(t_list **iter);
void		ft_check_rra(t_list **iter);
void		ft_check_rrb(t_list **iter);

void		ft_translator(t_list *movements);

#endif