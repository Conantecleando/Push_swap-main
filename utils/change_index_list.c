/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:29:44 by daroldan          #+#    #+#             */
/*   Updated: 2024/03/30 14:05:19 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

void	new_index(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	if (!*stack || *stack->next != NULL)
		return ;
	temp = *stack;
	i = -1;
	while (temp)
	{
		temp->index = ++i;
		temp = temp->next;
	}
	return ;
}

void	plus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || *stack->next != NULL)
		return ;
	temp = *stack;
	while (temp->next)
	{
		temp->index = (temp)->index++;
		temp = temp->next;
	}
	return ;
}

void	minus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!*stack || *stack->next = NULL)
		return ;
	temp = *stack;
	while (temp->next)
	{
		temp->index = (temp)->index--;
		temp = temp->next;
	}
	return ;
}
