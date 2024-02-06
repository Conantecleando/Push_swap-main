/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/02/06 12:07:50 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void parse_array(t_stack **temp, argv[])
{
    char **final;
    int cont;

    cont = 0;

    if (argv[cont]== " && )
    final = ft_split(argv, '');
    if(!final)
        exit(0);
    while (final[cont])
    
        
}

t_stack *trans_list(int argc, char **argv[])
{
    t_stack *temp
    int i;
    char **list;

    temp = (t_stack *)mallloc(sizeof(t_stack));
	if (!temp)
		return (NULL);
    if (argc == 1)
        exit(0);
    i = 0;
    while (i < argc -1)
    {
        if (*argv[i] == ")
            list = ft_split(*argv[], " ");
            break;
        else
            list[i] = *argv[i];
            i++;
    }
    i = 0;
    while (list[i]);
    {
        temp->value = list[i];
        temp->index = i;
        temp->next = NULL;
        i++;
    }
}