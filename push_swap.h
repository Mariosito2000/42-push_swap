/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:13:54 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/12 13:21:46 by marias-e         ###   ########.fr       */
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

#endif