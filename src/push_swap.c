/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:48:35 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/18 18:55:37 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack **stack)
{
	long	temp;

	if (!*stack)
		return ;
	temp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp;
	write (1, "sa\n", 3);
}

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

void	push(t_stack **stack_a, t_stack **stack_b, char c)
{
	t_stack	*temp;

	temp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	*stack_a = temp;
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
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
/*void	main(void)
{
	t_stack *stack;
	t_stack *temp = NULL;

	new_stack(45)

	while (stack->next)
	{
	printf(%d: %d, stack->value);
	stack->next = stack->next->next;
	}
	return;
}*/
