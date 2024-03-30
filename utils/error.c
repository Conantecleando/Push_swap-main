/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:02:58 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/31 00:04:51 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

void	type_error(char **list)
{
	int	i;

	i = 0;

	while (list[i])
	{
		if (list[i] >= 0 && list[i] <= 9 || list[i] == ' '
			|| list[i] == '+' || list[i] == '-')
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

bool	double_number_error(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*equal;

	temp = *stack_a;
	while (temp)
	{
	equal = *stack_a;
		while (equal)
		{
			if (temp->index != equal->index)
			{
				if (temp->value == equal->value)
					return (false);
				else
				equal = equal->next;
			}
			else
				equal = equal->next;
		}
		temp = temp->next;
	}
	return (true);
}
