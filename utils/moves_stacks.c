/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:17:23 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/22 02:59:20 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	moves(t_stack *stack_a, t_stack *stack_b)
{
	int	cheap;

	while (stack_b)
	{
		new_index(stack_b);
		new_index(stack_a);
		target(stack_b, stack_a);
		cost_push(stack_a, stack_b);
		cheap = absolute(stack_b->cost) + absolute(stack_b->costarget);
		better_moves (stack_a, stack_b);
		stack_b = stack_b->next;
	}
}*/

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
/*
int	search_move(t_stack *stack_b)
{
	int		flag;
	int		min_flag;
	t_stack	*temp;

	temp = stack_b;
	min_flag = INT_MAX;
	while (temp)
	{
		flag = absolute(temp->cost) + absolute(temp->costarget);
		if (flag < min_flag)
			min_flag = flag;
		temp = temp->next;
	}
	return (flag);
}*/

void better_moves (t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		better;
	int		cost;
	int		costarget;

	temp = *stack_b;
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
	moves(*stack_a, *stack_b);
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