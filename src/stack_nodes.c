/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:53:22 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/20 19:06:12 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

long	find_max_value(t_stack *stack)
{
	t_stack	*temp;
	long	max_value;

	max_value = LONG_MIN;
	temp = stack;
	while (temp)
	{
		if (temp->value > max_value)
			max_value = temp->value;
		temp = temp->next;
	}
	return ((max_value));
}

int	find_min_value(t_stack **stack)
{
	t_stack	*temp;
	long	min_value;
	int		index;

	min_value = LONG_MAX;
	temp = *stack;
	while (temp)
	{
		if (temp->value < min_value)
		{
			min_value = temp->value;
			index = temp->index;
		}
		temp = temp->next;
	}
	return (index);
}

int	find_average_value(t_stack *stack)
{
	int		avg;
	t_stack	*temp;

	temp = stack;
	avg = 0;
	while (temp)
	{
		avg += temp->value;
		temp = temp->next;
	}
	avg = avg / stack_len(stack);
	return (avg);
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
