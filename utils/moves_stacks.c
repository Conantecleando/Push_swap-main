/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:17:23 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/24 20:50:35 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	moves(t_stack **stack_a, t_stack **stack_b, t_stack *cheap)
{
	if (cheap->costarget < 0 && cheap->cost < 0)
		rrr(stack_a, stack_b);
	else if (cheap->costarget > 0 && cheap->cost > 0)
		rr(stack_a, stack_b);
	else if (cheap->costarget == 0 && cheap->cost == 0)
		push(stack_b, stack_a, 'a');
	else if (cheap->costarget < 0)
		reverse_rotate_stack(stack_a, 'a');
	else if (cheap->costarget > 0)
		rotate_stack(stack_a, 'a');
	else if (cheap->cost < 0)
		reverse_rotate_stack(stack_b, 'b');
	else if (cheap->cost > 0)
		rotate_stack(stack_b, 'b');
}

t_stack *better_moves(t_stack *stack_b)
{
	t_stack	*temp;
	t_stack *cheap;

	temp = stack_b;
	cheap = temp;
	while (temp)
	{
		if (absolute(temp->costarget) + absolute(temp->cost)
			< absolute(cheap->costarget) + absolute(cheap->cost))
			cheap = temp;
		temp = temp->next;
	}
	return (cheap);
}
