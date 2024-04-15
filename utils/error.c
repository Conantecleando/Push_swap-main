/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:02:58 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/15 12:11:58 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

bool	type_error(char **list)
{
	int	i;
	int	j;

	i = 0;
	while (list[i])
	{
		j = 0;
		while (list[i][j])
		{
			if ((list[i][j] >= '0' && list[i][j] <= '9')
				|| list[i][j] == '+' || list[i][j] == '-')
				j++;
			else
				return (false);
		}
		i++;
	}
	return (true);
}

bool	double_number_error(t_stack *stack_a)
{
	t_stack	*temp;
	t_stack	*equal;

	temp = stack_a;
	while (temp)
	{
		equal = temp->next;
		while (equal)
		{
			if (temp->value == equal->value)
				return (false);
			equal = equal->next;
		}
		temp = temp->next;
	}
	return (true);
}
