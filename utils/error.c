/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:02:58 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/08 23:54:21 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

bool	type_error(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		if (list[i] >= 0 && list[i] <= 9
			|| list[i] == '+' || list[i] == '-')
			i++;
		else
			return (false);
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
