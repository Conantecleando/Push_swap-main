/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/26 10:04:05 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_ptr(char **ptr, int t)
{
	t = 0;
	while (ptr[t])
		free(ptr[t++]);
	free(ptr);
}

long	ft_atol(char *n)
{
	int		i;
	long	l;

	l = 0;
	i = 1;
	while (*n == ' ' || *n == '\t' || *n == '\n' || \
			*n == '\r' || *n == '\f' || *n == '\v')
		n++;
	if (*n == '-' || *n == '+')
	{
		if (*n == '-')
			i = -1;
		n++;
	}
	while (ft_isdigit(*n))
	{
		l = l * 10 + (*n - '0');
		n++;
	}
	return (l * i);
}

void	trans_list(int argc, char **argv, t_stack **stack_a)
{
	int			i;
	char		**list;

	i = 1;
	while (i < argc)
	{
		list = ft_split(argv[i++], ' ');
		if ((type_error(list)) == 0)
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		list_to_stack(list, stack_a);
		free_ptr(list, 0);
	}
}

void	list_to_stack(char **list, t_stack **stack_a)
{
	int	z;

	z = 0;
	if (!list)
		exit(EXIT_FAILURE);
	while (list[z])
	{
		insert_end_list(stack_a, ft_atol(list[z++]));
	}
	if ((double_number_error(*stack_a)) == 0)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
