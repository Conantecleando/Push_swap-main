/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/31 00:57:16 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

void	*trans_list(int argc, char **argv)
{
	int			i;
	int			z;
	char		**list;
	t_stack		stack_a;

	if (!list)
		free (list);
	i = 1;
	z = 0;
	stack_a = new_stack(NULL);
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	while (i < argc)
	{
		list = ft_split(argv[i], ' ');
		i++;
	}
	if(type_error(list))
		exit(EXIT_FAILURE);
	if(double_number_error(list))
		exit(EXIT_FAILURE);
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
