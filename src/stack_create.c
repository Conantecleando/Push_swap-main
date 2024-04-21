/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:57:03 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/21 00:32:50 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Creamos la lista con el primer nodo.
t_stack	*new_stack(long value)
{
	t_stack		*first;

	first = (t_stack *)malloc(sizeof(t_stack));
	if (!first)
		return (NULL);
	first->index = 0;
	first->value = value;
	first->target = 0;
	first->cost = 0;
	first->costarget = 0;
	first->next = NULL;
	return (first);
}

//Esta funcion inserta nodos con los dos valores dados al final de la lista
void	insert_end_list(t_stack **head, long value)
{
	t_stack	*temp;

	if (*head == NULL)
		*head = new_stack(value);
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_stack(value);
	}
}
