/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:29:44 by daroldan          #+#    #+#             */
/*   Updated: 2024/01/14 19:38:01 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	plus_index_list(t_stack **stack)
{
	t_stack	*temp;

	if (!**stack || **stack->next != NULL)
		return ;
	temp = **stack;
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

	if (!**stack || **stack->next = NULL)
		return ;
	temp = **stack;
	while (temp->next)
	{
		temp->index = (temp)->index--;
		temp = temp->next;
	}
	return ;
}
