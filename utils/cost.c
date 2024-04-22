/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:24:31 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/22 01:57:51 by daroldan         ###   ########.fr       */
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
		temp_b->cost = temp_b->pos;
		if (temp_b->pos > len_b / 2)
			temp_b->cost = (len_b - temp_b->pos) * -1;
		temp_b->costarget = temp_b->target;
		if (temp_b->target > len_a / 2)
			temp_b->costarget = (len_a - temp_b->target) * -1;
		temp_b = temp_b->next;
	}
}

int	get_target(t_stack **stack_a, int index_b, int target_i, int target)
{
	t_stack	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index < index_b && tmp->index < target_i)
		{
			target = tmp->pos;
			target_i = tmp->index;
		}
		tmp = tmp->next;
	}
	if (target_i == MAX_INT)
		return (target) ;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->index < target_i)
		{
			target = tmp->pos;
			target_i = tmp->index;
		}
		tmp = tmp->next;
	}
	return (target);
}

void	target(t_stack **stacka, t_stack **stackb)
{
	t_stack	*temp;
	int 	target;

	temp = *stackb;
	get_position(*stacka);
	get_position(*stackb);
	target = 0;
	while (temp)
	{
		target = get_target(stacka, temp->index, MAX_INT, target);
		temp->target = target;
		temp = temp->next;
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