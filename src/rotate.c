/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:29:59 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/22 21:33:32 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_stack **stack, char c)
{
	t_stack	*first;
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = first;
	*stack = first->next;
	first->next = NULL;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_stack(stack_a, 'r');
	rotate_stack(stack_b, 'r');
	write(1, "rr\n", 3);
}

void	reverse_rotate_stack(t_stack **stack, char c)
{
	t_stack	*last;
	t_stack	*temp;

	if (!*stack || !(*stack)->next)
		return ;
	last = *stack;
	temp = NULL;
	while (last->next)
	{
		temp = last;
		last = last->next;
	}
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_stack(stack_a, 'R');
	reverse_rotate_stack(stack_b, 'R');
	write(1, "rrr\n", 3);
}
