/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:19:17 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/12 13:59:05 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_chr(char *str)
{
	int	i;

	if ((str[0] == '-' && (str[1] == 0 || str[1] == '0')) || \
		(str[0] == '0' && str[1]))
		ft_exit(1);
	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_strchr_mod("0123456789", str[i]) == -1)
			ft_exit(1);
		i++;
	}
}

static int	ft_check_limits(int n, char	*str)
{
	if (((n < 0 || ft_strlen(str) > 10) && str[0] != '-')
		|| (ft_strlen(str) >= 10 && str[0] > '2'))
		return (1);
	if (((n == 0 || ft_strlen(str) > 11) && str[0] == '-')
		|| (ft_strlen(str) >= 11 && str[1] > '2'))
		return (1);
	return (0);
}

static void	ft_add_number(char **temp, t_list **stack_a)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		ft_check_chr(temp[i]);
		if (!*stack_a)
			*stack_a = ft_lstnew(ft_atoi(temp[i]));
		else
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(temp[i])));
		ft_check_limits(ft_lstlast(*stack_a)->content, temp[i]);
		i++;
	}
}

static void	ft_check_doubled(t_list *stack_a)
{
	int		comp;
	t_list	*aux;

	while (stack_a)
	{
		aux = stack_a->next;
		comp = stack_a->content;
		while (aux)
		{
			if (aux->content == comp)
				ft_exit(1);
			aux = aux->next;
		}
		stack_a = stack_a->next;
	}
}

void	ft_arg_manager(char **argv, int argc, t_list **stack_a)
{
	int		i;
	char	**temp;

	i = 1;
	while (i < argc)
	{
		temp = ft_split(argv[i], ' ');
		if (!temp || !temp[0])
			ft_exit(1);
		ft_add_number(temp, stack_a);
		i++;
	}
	ft_check_doubled(*stack_a);
}
