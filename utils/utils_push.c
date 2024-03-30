/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/30 14:06:13 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

void	*trans_list(int argc, char **argv, t_stack **stack_a)
{
	int			i;
	int			z;
	char		**list;

	if (!list)
		free (list);
	i = 1;
	z = 0;
	while (i < argc)
	{
		list = ft_split(argv[i], ' ');
		i++;
		type_error(list)
		insert_end_list(*stack_a, atol(list[i]));
		double_number_error(*stack_a);
	}
	free (list);
}

long	ft_atol(char *n)
{
	int		i;
	long	l;

	l = 0;
	while (*n == ' ' || *n == '\t' || *n == '\n' || \
			*n == '\r' || *n == '\f' || *n == '\v')
		n++;
	if (n == '-' || n == '+')
	{
		if (n == '-')
			i = -1;
		n++;
	}
	while (ft_isdigit(*n))
	{
		l = l * 10 +(n - '0');
		n++;
	}
	return (l * i);
}
