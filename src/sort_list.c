/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:11:15 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/21 07:01:39 by daroldan         ###   ########.fr       */
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
	int		max;
	int		len;

	len = stack_len(*stack_a);
	while (len >= 4)
	{
		max = find_average_value(*stack_a);
		while ((*stack_a)->value < max / 2)
			rotate_stack(stack_a, 'a');
		push(stack_a, stack_b, 'b');
		len--;
	}
	printf("antes de ser ordenadas\n");
	printList(*stack_a);
	printList(*stack_b);
	printf("HASTA AQUI\n");
	sort_three(stack_a);
	while (stack_b)
	{
		new_index(*stack_b);
		new_index(*stack_a);
		target(*stack_b, *stack_a);
		cost_push(*stack_a, *stack_b);
		moves(*stack_a, *stack_b);
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) < 4 && stack_len(*stack_b) == 0
		&& list_ok(*stack_a))
	{
		write(2, "list is ok\n", 12);
		return ;
	}
	else if (stack_len(*stack_a) < 4 && stack_len(*stack_b) == 0
		&& !list_ok(*stack_a))
		sort_three(stack_a);
	else if (stack_len(*stack_a) >= 4)
		sort_longer(stack_a, stack_b);
}
/*	
	else if ((stack_len(*stack_a) > 3 && stack_len(*stack_b) == 0)
		|| !stack_len(*stack_b))
	{
		sort_longer(stack_a, stack_b);
	}
}*/
