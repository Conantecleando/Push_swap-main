/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:11:15 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/15 11:27:58 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	list_ok(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp)
	{
		if ((temp->value) > (temp->next->value))
			return (false);
		temp = temp->next;
	}
	return (true);
}

void	sort_longer(t_stack **stack_a, t_stack **stack_b)
{
	if (!(*stack_a) || !(*stack_b))
		return ;
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_len(*stack_a) < 4 && stack_len(*stack_b) == 0)
	{
		if (list_ok(*stack_a))
		{
			write(2, "list is ok\n", 12);
			return ;
		}
	}
	else if (stack_len(*stack_a) < 4 && stack_len(*stack_b) == 0 && !list_ok(*stack_a))
	{
		{
			rotate_stack(stack_a);
			if (list_ok(*stack_a))
			{
				write(2, "list is ok\n", 12);
				return ;
			}
			else
			{
				rotate_stack(stack_a);
				write(2, "list is ok\n", 12);
			}
		}
	}
	else if ((stack_len(*stack_a) > 3 && stack_len(*stack_b)== 0) || !stack_len(*stack_b))
	{
		sort_longer(stack_a, stack_b);
	}
}
