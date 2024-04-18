/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:24:31 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/19 01:09:14 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

//aqui hay que empezar a calcular costes teniendo en cuenta el target objetivo
void	cost_push(t_stack *stacka, t_stack *stackb)
{
	t_stack	*origin;
	t_stack	*dest;

	origin = stacka;
	dest = stackb;
	while (dest)
	{
		if (dest->index < stack_len(dest) / 2)
			dest->cost = ((stack_len(dest) - dest->index)) * -1;
		else
			dest->cost = dest->index;
		dest = dest->next;
	}
	while (origin)
	{
		if (origin->target < (stack_len(origin) / 2))
			origin->cost = (stack_len(origin) - origin->target) * -1;
		else
			origin->cost = origin->target;
		origin = origin->next;
	}
}

void	target(t_stack *stacka, t_stack *stackb, int min)
{
	t_stack	*origin;
	t_stack	*dest;

	origin = stacka;
	dest = stackb;
	min = MAX_INT;
	origin->target = min;
	while (origin)
	{
		while ((dest->value < origin->value) && (origin->value < min))
		{
			min = dest->value;
			origin->target = dest->index;
			dest = dest->next;
		}
		if (origin->value == min)
			origin->target = stack_len(stack_a);
		if (min != MAX_INT)
			return ;
		if (dest->value < min)
		{
			min = dest->value;
			origin->target = dest->index;
			dest = dest->next;
		}
		origin = origin->next;			
	}
}
