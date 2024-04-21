/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:29:44 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/20 19:37:15 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	new_index(t_stack *stack)
{
	int		i;

	i = -1;
	while (stack)
	{
		stack->index = ++i;
		stack = stack->next;
	}
	return ;
}

void	plus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	temp = *stack;
	while (temp->next)
	{
		temp->index++;
		temp = temp->next;
	}
	return ;
}

void	minus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack)
		return ;
	temp = *stack;
	while (temp->next)
	{
		temp->index--;
		temp = temp->next;
	}
	return ;
}
