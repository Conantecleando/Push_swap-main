/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:24:31 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/22 20:22:59 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

//aqui hay que empezar a calcular costes teniendo en cuenta el target objetivo
void	cost_push(t_stack **stack_a, t_stack **stack_b)
{
	int		len_b;
	int		len_a;
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *stack_a;
	temp_b = *stack_b;
	len_a = stack_len(*stack_a);
	len_b = stack_len(*stack_b);
	while (temp_b)
	{
		temp_b->cost = temp_b->index;
		if (temp_b->index > len_b / 2)
			temp_b->index = (len_b - temp_b->index) * -1;
		temp_b->costarget = temp_b->target;
		if (temp_b->target > len_a / 2)
			temp_b->costarget = (len_a - temp_b->target) * -1;
		temp_b = temp_b->next;
	}
}

static void	get_target(t_stack **stack_a, size_t *target, int value, int limit)
{
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (value < tmp->value && tmp->value < limit)
		{
			*target = tmp->index;
			limit = tmp->value;
		}
		tmp = tmp->next;
	}
	if (limit != MAX_INT)
		return ;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->value < limit)
		{
			limit = tmp->value;
			*target = tmp->index;
		}
		tmp = tmp->next;
	}
}

void	target(t_stack **stacka, t_stack **stackb)
{
	t_stack	*temp_b;
	size_t	target;

	temp_b = *stackb;
	target = 0;
	while (temp_b)
	{
		if (temp_b->value == MAX_INT)
			target = stack_len(*stacka);
		else
			get_target(stacka, &target, temp_b->value, MAX_INT);
		temp_b->target = target;
		temp_b = temp_b->next;
	}
}
