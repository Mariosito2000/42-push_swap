# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 16:14:13 by marias-e          #+#    #+#              #
#    Updated: 2023/02/10 12:39:45 by marias-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_arg_manager.c \
			ft_big_sort.c \
			ft_check_order.c \
			ft_check_rr.c \
			ft_check_rrr.c \
			ft_check_ss.c \
			ft_counter_push_swap.c \
			ft_counter_rotate.c \
			ft_exit.c \
			ft_fit.c \
			ft_free_array.c \
			ft_groups.c \
			ft_manage_orders.c \
			ft_normalize.c \
			ft_optimize.c \
			ft_path.c \
			ft_path_aux.c \
			ft_push.c \
			ft_return.c \
			ft_rotate.c \
			ft_sort_2.c \
			ft_sort_3.c \
			ft_sort_4.c \
			ft_sort_selector.c \
			ft_sorty.c \
			ft_swap.c \
			ft_translator.c \
			FUNCIONES_PRUEBAS.c

MAIN	=	main.c

CHECKER	=	checker_main.c

OBJS 	=	$(addprefix $(O_DIR)/, $(SRCS:.c=.o))

MAIN_O	=	$(MAIN:.c=.o)

CHECKER_O	=	${CHECKER:.c=.o}

O_DIR	=	Objs

CC	=	gcc -Wall -Wextra -Werror

NAME 	=	push_swap

NAME_BONUS	=	checker

L_DIR	=	Libft/

LIBFT	=	$(addprefix $(L_DIR), libft.a)

$(O_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $(O_DIR)/${<:.c=.o} -I

all:		$(LIBFT) ${NAME}

bonus:		$(LIBFT) $(NAME_BONUS)

$(LIBFT):
	@make -C $(L_DIR)

${NAME}:	${OBJS} ${MAIN_O}
	@$(CC) main.o $(OBJS) -o ${NAME} $(LIBFT)

${NAME_BONUS}: 	${OBJS} ${CHECKER_O}
	@$(CC) checker_main.o $(OBJS) -o ${NAME_BONUS} $(LIBFT)

clean:
		rm -rf ${O_DIR} rm main.o rm checker_main.o && cd $(L_DIR) && $(MAKE) clean

fclean:		clean
		rm -rf ${O_DIR} rm push_swap rm checker rm main.o rm checker_main.o && cd $(L_DIR) && $(MAKE) fclean

re:		fclean all

.PHONY:	all clean fclean re run bonus
