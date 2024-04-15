/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:53:22 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/15 11:10:57 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (! (*stack))
		return ;
	while (stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}

long	find_max_value(t_stack **stack)
{
	t_stack	*temp;
	long	max_value;

	max_value = LONG_MIN;
	temp = *stack;
	while (!temp)
	{
		if (temp->value > max_value)
			max_value = temp->value;
		temp = temp->next;
	}
	return ((max_value));
}

int	stack_len(t_stack *stack)
{
	int		i;
	t_stack	*temp;

	if (!stack)
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
