# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 16:14:13 by marias-e          #+#    #+#              #
#    Updated: 2023/02/13 13:09:15 by marias-e         ###   ########.fr        #
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
			main.c

BONUS_SRCS	=	ft_arg_manager.c \
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
			checker_main.c

OBJS 	=	$(addprefix $(O_DIR)/, $(SRCS:.c=.o))

BONUS_OBJS	=	$(addprefix $(BO_DIR)/, $(BONUS_SRCS:.c=.o))

O_DIR	=	OBJS

BO_DIR	=	BONUS_OBJS

CC	=	gcc -Wall -Wextra -Werror

NAME 	=	push_swap

NAME_BONUS	=	checker

L_DIR	=	Libft/

LIBFT	=	$(addprefix $(L_DIR), libft.a)

$(O_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $(O_DIR)/${<:.c=.o} -I.

$(BO_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $(BO_DIR)/${<:.c=.o} -I.

all:		$(LIBFT) ${NAME}

bonus:		$(LIBFT) $(NAME_BONUS)

$(LIBFT):
	@make -C $(L_DIR)

${NAME}:	${OBJS}
	@	$(CC) $(OBJS) -o ${NAME} $(LIBFT)
	@	echo "\n\033[92m["push_swap" COMPILED SUCCESSFULY]\033\n[0m"

${NAME_BONUS}: 	${BONUS_OBJS}
	@	$(CC) $(BONUS_OBJS) -o ${NAME_BONUS} $(LIBFT)
	@	echo "\n\033[92m["checker" COMPILED SUCCESSFULY]\033\n[0m"


clean:
	@	rm -rf ${O_DIR} rm -rf ${BO_DIR} && cd $(L_DIR) && $(MAKE) clean
	@	echo "\n\033[31m[Objs DELETED]\033\n[0m"

fclean:		clean
	@	rm -rf ${O_DIR} rm -rf ${BO_DIR} rm push_swap rm checker && cd $(L_DIR) && $(MAKE) fclean
	@	echo "\n\033[31m[FCLEAN DONE]\033\n[0m"

re:		fclean all

.PHONY:	all clean fclean re bonus
