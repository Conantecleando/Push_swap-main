/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/03 21:45:25 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../malaga-42-main/push_swap/Push_swap-main/bin/push_swap.h"

void	*trans_list(int argc, char **argv, t_stack **stack_a)
{
	int			i;
	char		**list;

	i = 1;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	while (i < argc)
	{
		list = ft_split(argv[i++], ' ');
		if ((type_error(list)) == 0)
			exit(EXIT_FAILURE);
		list_to_stack(list, *stack_a);
		free_ptr(list, 0);
	}
	list[i + 1] = '\0';
	while (list[i])
		free (list[i--]);
}

void	list_to_stack(char **list, t_stack **stack_a)
{
	int	z;

	z = 0;
	if (!list || !*stack_a)
		exit(EXIT_FAILURE);
	while (list[z] != '\0')
	{
		insert_end_list(*stack_a, atol(list[z++]));
	}
	if ((double_number_error(stack_a)) == 0)
		exit(EXIT_FAILURE);

}

long	ft_atol(char *n)
{
	int		i;
	long	l;

	l = 0;
	while (*n == ' ' || *n == '\t' || *n == '\n' || \
			*n == '\r' || *n == '\f' || *n == '\v')
		n++;
	if (n == '-' || n == '+')
	{
		if (n == '-')
			i = -1;
		n++;
	}
	while (ft_isdigit(*n))
	{
		l = l * 10 +(n - '0');
		n++;
	}
	return (l * i);
}
