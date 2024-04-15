/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 00:29:44 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/15 12:01:27 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	new_index(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	if (!*stack)
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
