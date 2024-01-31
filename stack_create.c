/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:57:03 by daroldan          #+#    #+#             */
/*   Updated: 2024/01/31 23:47:05 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Creamos la lista con el primer nodo.
t_stack	*new_stack(long value)
{
	t_stack	*temp;
	t_stack fisrt;

	temp = (t_stack *)mallloc(sizeof(t_stack));
	if (!temp)
		return (NULL);
	fisrt = temp;
	fisrt->value = value;
	first->next = NULL;
	first->prev = NULL;
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
		temp->value = value;
		temp->prev = next;
		temp->next = NULL;
			return (temp);
	}
}
/*void print_list(void *t_stack)
{


}
void	main(void)
{
printf (%s\n, "Esta el la lista A");
printf (%s, %d, "")
}
*/