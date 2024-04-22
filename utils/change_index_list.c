/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:29:44 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/22 01:39:20 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	get_index(t_stack *stack_a, int size)
{
	t_stack	*temp;
	t_stack	*max;
	int		i;

	while (--size > 0)
	{
		temp = stack_a;
		max = NULL;
		i = MIN_INT;
		while (temp)
		{
			if (temp->value == MIN_INT && temp->index == 0)
				temp->index = 1;
			if (temp->value > i && temp->index == 0)
			{
				i = temp->value;
				max = temp;
				temp = temp->next;
			}
			else
				temp = temp->next;
		}
		if (max != NULL)
			max->index = size;
	}
}
void	new_index(t_stack *stack)
{
	int		i;

	i = -1;
	while (stack)
	{
		stack->index = ++i;
		stack = stack->next;
	}
	return ;
}

void	get_position(t_stack *stack)
{
	int		i;

	i = -1;
	while (stack)
	{
		stack->pos = ++i;
		stack = stack->next;
	}
	return ;
}

void	plus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	temp = *stack;
	while (temp->next)
	{
		temp->index++;
		temp = temp->next;
	}
	return ;
}

void	minus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	temp = *stack;
	while (temp->next)
	{
		temp->index--;
		temp = temp->next;
	}
	return ;
}
