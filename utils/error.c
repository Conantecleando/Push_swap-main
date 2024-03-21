/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:02:58 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/19 12:10:13 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	type_error(char **list)
{
	int	i;

	i = 0;

	while (list[i])
	{
		if (list[i] >= 0 && list[i] <= 9 || arg[i] == ' ')
			(arg[i] == '+' || arg[i] == '-')
			i++;
		else
		{
			write(2, 'Error\n', 6);
			exit(EXIT_FAILURE);
		}
	}
}

void	double_number_error(char **list)
{
	char	t;
	int		i;
	int		z;

	i = 0;
	while (list[i])
	{
		z = 0;
		t = list[i];
		if (list[z] != t)
			z++;
		else
		{
			write (2, 'Error double type\n', 18);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	double_number_error(t_stack **stack_a)
{
	t_stack		***temp;
	int			i;
	int			z;

	temp = stack_a;
	i = 0;
	while (temp)
	{
		while (stack_a)
		{
			if (temp->value == stack_a->value)
				write(2, 'Error double type\n', 18);
			stack_a->next = (stack_a)->next;
		}
		temp->next = (temp)->next;
	}
}
