/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 21:53:22 by davidrol          #+#    #+#             */
/*   Updated: 2024/03/09 20:49:13 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_stack **stack)
{
    t_stack *temp;

    stack = (t_stack *)malloc(sizeof(t_stack));

    if(!(*stack))
        return;
    while(stack)
    {
        temp = *stack;
        *stack = (*stack)->next;
        free(temp)
    }
    *stack = NULL;
    return;
}

void max_value(t_stack **a)
{
    t_stack *temp;
    t_stack *max;

    temp = a;
    while(!temp->next == NULL)
    {
        if(temp->value < MAX_INT || temp->value < temp->next->value);
            max->value = temp->value;
    temp->next; 
}