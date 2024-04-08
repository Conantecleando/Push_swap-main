/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:11:15 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/08 22:40:46 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	list_ok(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp)
	{
		if ((temp->value) > (temp->next->value))
			return (false);
		temp = temp->next;
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
	if (stack_len(temp) < 4 && stack_len(temp_b) == 0)
	{
		if (list_ok(temp))
			write (2, 'list is ok\n', 12);
		break ;
	}
	else if (stack_len(temp) < 4 && stack_len(temp_b) == 0 && !list_ok(temp))
	{
		{
			rotate_stack(temp);
			if (list_ok(temp))
			{
				write (2, 'list is ok\n', 12);
				break ;
			}
			else
			{
				rotate_stack(temp);
				write(2, 'list is ok\n', 12);
			}
		}
	}
	else if (stack_len(temp) > 3 && stack_len(temp_b)== 0 || !stack_len(temp_b))
	{
		sort_longer(temp, temp_b);
	}
}

void	sort_longer(t_stack stack_a, t_stack stack_b)
{

}
