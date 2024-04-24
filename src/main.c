/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:49:35 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/24 21:26:18 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc >= 2)
		trans_list(argc, argv, &stack_a);
	sort(&stack_a, &stack_b);
	t_stack *temp = stack_a;
	while (temp)
	{
		stack_a = stack_a->next;
		free(temp);
		temp = stack_a;
	}
}
