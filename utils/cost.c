/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:24:31 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/15 12:06:04 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

//aqui hay que empezar a calcular costes teniendo en cuenta el target objetivo
void	cost_push(t_stack **stacka, t_stack **stackb)
{
	t_stack	*origin;
	t_stack	*dest;

	if (!*stacka || !stackb)
		return ;
	origin = *stacka;
	dest = *stackb;
	while (dest)
	{
		if (dest->index < stack_len(dest) / 2)
			dest->cost = ((stack_len(dest) - dest->index)) * -1;
		else
			dest->cost = dest->index;
	}
	while (origin)
	{
		if (origin->target < (stack_len(origin) / 2))
			origin->cost = (stack_len(origin) - origin->target) * -1;
		else
			origin->cost = origin->target;
	}
}

void	target(t_stack **stacka, t_stack **stackb, int min)
{
	t_stack	*origin;
	t_stack	*dest;

	if (!*stacka || !*stackb)
		return ;
	origin = *stacka;
	dest = *stackb;
	min = MIN_INT;
	origin->target = min;
	while (origin)
	{
		if ((dest->value < origin->value) && (origin->value < min))
		{
			min = origin->value;
			dest->target = origin->index;
			if (origin->value < min)
			{
				min = origin->value;
				dest->target = origin->index;
			}
			if (min != MAX_INT)
				return ;
			origin = origin->next;
		}
	}
}
