/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:49:35 by davidrol          #+#    #+#             */
/*   Updated: 2024/02/06 12:08:50 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Con los argumentos creamos los dos stack
int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int     i;
    stack_a = (t_stack *)malloc(sizeof(t_stack));
    if(!stack_a)
        return(NULL);
    t_stack_b = NULL;
    if (argc == 0)
        return (0);
    stack_a = new_stack(NULL);

    while ((ft_split(*argv, " "))[i])
    {
        stack_a->value = (ft_split(*argv, " "))[i];
        stack_a->next
    //aqui hay que hacer o un split o
    // pasar cada uno a argv a un nodo

}