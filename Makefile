# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 16:14:13 by marias-e          #+#    #+#              #
#    Updated: 2022/12/06 16:08:01 by marias-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(wildcard *.c)

OBJS 	=	$(addprefix $(O_DIR)/, $(SRCS:.c=.o))

O_DIR	=	Objs

CC	=	gcc -Wall -Wextra -Werror

NAME 	=	push_swap

L_DIR	=	Libft/

LIBFT	=	$(addprefix $(L_DIR), libft.a)

$(O_DIR)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) -c $< -o $(O_DIR)/${<:.c=.o} -I

all:		$(LIBFT) ${NAME}

bonus:		$(LIBFT) $(NAME_BONUS)

$(LIBFT):
	@make -C $(L_DIR)

${NAME}:	${OBJS}
	@$(CC) $(OBJS) -o $(NAME) $(LIBFT)

clean:
		rm -rf ${O_DIR} && cd $(L_DIR) && $(MAKE) clean

fclean:		clean
		rm -rf ${O_DIR} && cd $(L_DIR) && $(MAKE) fclean

re:		fclean all

.PHONY:	all clean fclean re run bonus
