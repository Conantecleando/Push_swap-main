/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:49:35 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/10 22:26:31 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;
	char	**list;

	if (argc == 1 || (argc == 2 && !*argv[1][0]))
		return (1);
	else if (*argv >= 2)
		list = trans_list(argc, *argv[]);

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	t_stack_b = NULL;
	stack_a = new_stack(NULL);
	i = -1;
	while (list[++i])
		insert_end_list(stack_a, atol(list[i]))
	printf(%d, stack_a->value)
}
