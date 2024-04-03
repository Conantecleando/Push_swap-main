/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:24:31 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/04 00:45:47 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

//aqui hay que empezar a calcular costes teniendo en cuenta el target objetivo
void cost_push(t_stack **stacka, t_stack **stackb)
{
    t_stack *origin;
    t_stack *dest;

    if (!*stacka || !stackb)
        return ;
    origin = *stacka
    dest = *stackb;
    while (origin)
    {


    }
}

void	target(t_stack **stacka, t_stack **stackb)
{
	t_stack	*origin;
	t_stack	*dest;
	int		min;

	if (!*stacka || !*stackb)
		return ;
	origin = stacka;
	dest = stackb;
	min = MIN_INT;
	while (origin)
	{
		origin->target = min;
		if ((dest->value < origin->value) && (origin->value < min))
		{
			min = origin->value;
			des->target = origin->index;
			origin = oringin->next;
		}
		if (min != MAX_INT)
			return ;
		if (origin->value < min)
		{
			min = origin->value;
			dest->target = origin->index;
			origin = origin->next;
		}
	}
}
