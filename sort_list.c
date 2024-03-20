/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:11:15 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/20 21:50:22 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	list_ok(t_stack *stack)
{
	t_stack	temp;

	temp = stack;
	while (temp)
	{
		if (temp->value < temp->next->value)
			temp->next;
		else
			return (false);
	}
	return (true);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	t_stack	*temp;
	t_stack	*temp_b;

	temp = *stack_a;
	temp_b = *stack_b;
	i = 0;
	if (stack_len(stack_a) < 3)

        

}