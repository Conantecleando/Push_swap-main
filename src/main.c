/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:49:35 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/08 22:40:19 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_b = NULL;
	stack_a = new_stack(NULL);
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argv[2] > NULL)
		trans_list(argc, argv);
	sort (stack_a, stack_b);
	if(list_ok(stack_a))
		return (0);
	
	find_max_value(stack_a)


}