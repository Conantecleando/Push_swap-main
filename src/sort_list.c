/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:11:15 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/26 09:52:44 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	list_ok(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp && temp->next)
	{
		if ((temp->value) > (temp->next->value))
			return (false);
		temp = temp->next;
	}
	return (true);
}

void	sort_three(t_stack **stack_a)
{
	if (list_ok(*stack_a))
		return ;
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
		rotate_stack(stack_a, 'a');
	else if (((*stack_a)->value) < (*stack_a)->next->value)
		reverse_rotate_stack(stack_a, 'a');
	if (!list_ok(*stack_a))
		swap_stack(stack_a);
}

void	sort_longer(t_stack **stack_a, t_stack **stack_b)
{
	if (list_ok(*stack_a))
		return ;
	while (stack_len(*stack_a) >= 4)
	{
		if ((*stack_a)->value < find_average_value(*stack_a))
			push(stack_a, stack_b, 'b');
		else
			rotate_stack(stack_a, 'a');
		if (list_ok(*stack_a))
			break ;
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		new_index(*stack_a);
		new_index(*stack_b);
		target(*stack_a, *stack_b);
		cost_push(*stack_a, *stack_b);
		moves(stack_a, stack_b, better_moves(*stack_b));
	}
	while (!list_ok(*stack_a))
		reverse_rotate_stack(stack_a, 'a');
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (list_ok(*stack_a))
		return ;
	else if (stack_len(*stack_a) == 2)
		swap_stack(stack_a);
	else if (stack_len(*stack_a) < 4 && stack_len(*stack_b) == 0
		&& !list_ok(*stack_a))
		sort_three(stack_a);
	else if (stack_len(*stack_a) >= 4)
		sort_longer(stack_a, stack_b);
}
