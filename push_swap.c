/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:48:35 by daroldan          #+#    #+#             */
/*   Updated: 2024/03/09 23:59:36 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	erase_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}

void	t_stack	clear_stack(t_stack **stack)
{
	t_stack	*temp;

	while (!*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

void	swap_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	temp = *stack->value;
	*stack->value = *stack->next->value;
	*stack->next->value = temp;
	return ;
}

void	rotate_stack(t_stack **stack)
{
	t_stack	*first;
	t_stack	*temp;

	if (!*stack || !*stack->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	*stack = temp;
	while (temp->next)
		temp = temp->next;
	temp->next = first;
	first->next = NULL;
}

void	reverse_rotate_stack(t_stack **stack)
{
	t_stack	*last;
	t_stack	*temp;

	if (!*stack || !*stack->next)
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
}
void	main(void)
{
	t_stack *stack;
	t_stack *temp = NULL;

	new_stack(45)
	printf(%s/n, "Esta es la lista");
	while (stack->next)
	{
	printf(%d: %d, stack->value);
	stack->next = stack->next->next;
	}
	return;
}