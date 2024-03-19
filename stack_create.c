/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:57:03 by daroldan          #+#    #+#             */
/*   Updated: 2024/03/19 11:00:23 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Creamos la lista con el primer nodo.
t_stack	*new_stack(long value)
{
	t_stack		*temp;
	t_stack		fisrt;
	int			i;

	i = -1;
	temp = (t_stack *)mallloc(sizeof(t_stack));
	if (!temp)
		return (NULL);
	fisrt = temp;
	first->index = 0;
	fisrt->value = value;
	first->target = 0;
	first->next = NULL;
	return (temp);
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
