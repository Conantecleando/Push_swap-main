/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/04/21 00:43:45 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void printList(t_stack *head) 
{
	printf("Lista: \n");
    while (head != NULL) 
    {
       	printf("%ld\n", head->value);
		printf(" index  ");
        printf("%d", head->index);
        printf(" target ");
		printf("%d", head->target);
		printf(" cost  ");
		printf("%d", head->cost);
		printf("\n");
		printf(" costarget  ");
		printf("%d", head->costarget);
		printf("\n");
        head = head->next;
    }
    printf("\n");
}
// Copiado del ft_split.c para que se pueda utilizar
// Otra solución es añadir la función en el libft.h
static void	free_ptr(char **ptr, int t)
{
	t = 0;
	while (ptr[t])
		free(ptr[t++]);
	free(ptr);
}

long	ft_atol(char *n)
{
	int		i;
	long	l;

	l = 0;
	i = 1;
	while (*n == ' ' || *n == '\t' || *n == '\n' || \
			*n == '\r' || *n == '\f' || *n == '\v')
		n++;
	if (*n == '-' || *n == '+')
	{
		if (*n == '-')
			i = -1;
		n++;
	}
	while (ft_isdigit(*n))
	{
		l = l * 10 + (*n - '0');
		n++;
	}
	return (l * i);
}

void	trans_list(int argc, char **argv, t_stack **stack_a)
{
	int			i;
	char		**list;

	i = 1;
	while (i < argc)
	{
		list = ft_split(argv[i++], ' ');
		if ((type_error(list)) == 0)
			exit(EXIT_FAILURE);
		list_to_stack(list, stack_a);
		free_ptr(list, 0);
	}
}

void	list_to_stack(char **list, t_stack **stack_a)
{
	int	z;

	z = 0;
	if (!list)
		exit(EXIT_FAILURE);
	while (list[z])
	{
		insert_end_list(stack_a, ft_atol(list[z++]));
	}
	if ((double_number_error(*stack_a)) == 0)
		exit(EXIT_FAILURE);
}
