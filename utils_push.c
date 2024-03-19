/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/19 11:18:43 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*trans_list(int argc, char **argv, **stack a)
{
	int			i;
	int			z;
	char	**list;

	list = (char**) malloc(sizeof (char**));
	if (!list)
		free (list);
	i = 1;
	z = 0;
	while (i < argc)
	{
		list = split (argv[i], ' ');
		i++;
		type_error(list)
		double_number_error(list);
		insert_end_list(stack a, atol(list[i]));
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

int	stack_len(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	if (!(*stack))
		return (0);
	temp = stack;
	i = 0;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
