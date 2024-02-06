/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:02:58 by davidrol          #+#    #+#             */
/*   Updated: 2024/02/05 19:54:36 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void type_error(char **argv)
{
int i;

i = 0;
    while (argv[i])
    {
        if (argv[i] >= 0 && argv[i] <= 9 
        ||arg[i] == ' '||arg[i] == '+'||arg[i] == '-')
        i++;
        else
        {
        write(2, 'Error\n', 6);
        exit(EXIT_FAILURE);
        }
    }
}

void double_number (**stack)
{
    *stack->value
    while (!stack->next)
    {

    }

}