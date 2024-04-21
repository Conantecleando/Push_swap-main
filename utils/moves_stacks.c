/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:17:23 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/21 06:55:23 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves(t_stack *stack_a, t_stack *stack_b)
{
	int	cheap;

	while (stack_b)
	{
		cheap = absolute(stack_b->cost) + absolute(stack_b->costarget);
		if (stack_b->costarget < 0 && stack_b->cost < 0 && cheap)
			rrr(&stack_a, &stack_b);
		else if (stack_b->costarget > 0 && stack_b->cost > 0 && cheap)
			rr(&stack_a, &stack_b);
		else if (stack_b->costarget == 0 && stack_b->cost == 0 && cheap)
			push(&stack_b, &stack_a, 'a');
		else if (stack_b->costarget < 0 && cheap)
			reverse_rotate_stack(&stack_a, 'a');
		else if (stack_b->costarget > 0 && cheap)
			rotate_stack(&stack_a, 'a');
		else if (stack_b->cost < 0 && cheap)
			reverse_rotate_stack(&stack_b, 'b');
		else if (stack_b->cost > 0 && cheap)
			rotate_stack(&stack_b, 'b');
	}
}
/*
int	better_move(t_stack *stack_a, t_stack *stack_b)
{
	t_stack		*temp;
	t_stack		*temp2:
		int		i;

	i = INT_MAX;
	temp = stack_b;
	temp2 = stack_a;
	while (temp)
	{
		if ((absolute(stack_b->cost) + absolute(stack_b->costarget)) < i)
			i = (absolute(stack_b->cost) + absolute(stack_b->costarget));
		temp = temp->next;
	}
	return (i);
}

void	moves_stacks(t_stack **stack_a, t_stack **stack_b)
{
	int	cheap;

	while (stack_b)
	{
		new_index(*stack_b);
		new_index(*stack_a);
		target(*stack_b, *stack_a);
		cost_push(*stack_a, *stack_b);
		printList (*stack_b);
		cheap = better_move(**stack_a, **stack_b);
		moves (stack_a, stack_b, cheap);
		moves_stacks(*stack_a, *stack_b);
	}
}

*/