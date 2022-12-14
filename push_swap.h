/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:13:54 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/14 17:27:23 by marias-e         ###   ########.fr       */
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

void		ft_exit(int reason);
void		ft_free_split(char	**array);
void		ft_arg_manager(char **argv, int argc, t_list **stack_a);
int			ft_check_order(t_list *stack);
void		ft_push(t_list **source, t_list **dest);
void		ft_swap(t_list *list);
void		ft_double_swap(t_list *stack_a, t_list *stack_b);
void		ft_rotate(t_list **stack);
void		ft_rev_rotate(t_list **stack);
void		ft_sort_selector(int size, t_list **stack_a);
void		ft_sort_2(t_list **stack_a);
void		ft_sort_3(t_list **stack_a);
void		ft_sort_4(t_list **stack_a);

#endif