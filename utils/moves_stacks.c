/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:17:23 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/22 22:46:21 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->costarget < 0 && stack_b->cost < 0)
		rrr(&stack_a, &stack_b);
	else if (stack_b->costarget > 0 && stack_b->cost > 0)
		rr(&stack_a, &stack_b);
	else if (stack_b->costarget == 0 && stack_b->cost == 0)
		push(&stack_b, &stack_a, 'a');
	else if (stack_b->costarget < 0)
		reverse_rotate_stack(&stack_a, 'a');
	else if (stack_b->costarget > 0)
		rotate_stack(&stack_a, 'a');
	else if (stack_b->cost < 0)
		reverse_rotate_stack(&stack_b, 'b');
	else if (stack_b->cost > 0)
		rotate_stack(&stack_b, 'b');
}

void better_moves (t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*temp;
	int		better;
	int		cost;
	int		costarget;

	temp = stack_b;
	better = MAX_INT;
	while (temp)
	{
		if (absolute(temp->cost) + absolute(temp->costarget)< better)
		{
			better = absolute(temp->cost) + absolute(temp->costarget);
			cost = temp->cost;
			costarget = temp->costarget;
		}
		temp = temp->next;
	}
	if (stack_b->costarget < 0 && stack_b->cost < 0)
		rrr(&stack_a, &stack_b);
	else if (stack_b->costarget > 0 && stack_b->cost > 0)
		rr(&stack_a, &stack_b);
	else if (stack_b->costarget == 0 && stack_b->cost == 0)
		push(&stack_b, &stack_a, 'a');
	else if (stack_b->costarget < 0)
		reverse_rotate_stack(&stack_a, 'a');
	else if (stack_b->costarget > 0)
		rotate_stack(&stack_a, 'a');
	else if (stack_b->cost < 0)
		reverse_rotate_stack(&stack_b, 'b');
	else if (stack_b->cost > 0)
		rotate_stack(&stack_b, 'b');;
}
