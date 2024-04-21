/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:24:31 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/21 00:56:18 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

//aqui hay que empezar a calcular costes teniendo en cuenta el target objetivo
void	cost_push(t_stack *stacka, t_stack *stackb)
{
	t_stack	*final;
	t_stack	*start;

	final = stacka;
	start = stackb;
	while (start)
	{
		start->cost = start->index;
		if (start->index < stack_len(start) / 2)
			start->cost = ((stack_len(start) - (start->index)) * -1);
		start->costarget = start->target;
		if (start->target < (stack_len(final) / 2))
			start->costarget = (stack_len(final) - start->target) * -1;
		start = start->next;
	}
}

void	target(t_stack *stacka, t_stack *stackb)
{
	t_stack	*final;
	t_stack	*start;

	final = stackb;
	start = stacka;
	while (final)
	{
		start = stackb;
		while (start)
		{
			if ((final->value < start->value))
				final->target = start->index;
			else if ((final->value > start->value)
				&& (final->value < (find_max_value(start)))
				&& (final->value < start->next->value))
				final->target = start->next->index;
			else if (final->value > (find_max_value(start)))
				final->target = (stack_len(start));
			start = start->next;
		}
		final = final->next;
	}
}
	//min = MAX_INT;
	//max_a = find_max_value(start);
	//final->target = min;
	/*while (final)
	{
		if ((start->value < final->value) && (final->value < min))
		{
			min = start->value;
			final->target = start->index;
			start = start->next;
		}
		else if (final->value > max_a)
			final->target = stack_len(stacka);
		else if (min > MAX_INT)
			return ;
		else if (start->value > min)
		{
			min = start->value;
			final->target = start->index;
			start = start->next;
		}
		final = final->next;			
	}
*/