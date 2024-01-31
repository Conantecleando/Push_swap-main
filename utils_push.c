/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/01/31 23:47:05 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *trans_list(int argc, char **argv[])
{
    t_stack *temp
    int i;

    temp = (t_stack *)mallloc(sizeof(t_stack));
	if (!temp)
		return (NULL);
    if (argc == 1)
        exit(0);
    i = 0;
    while (i < argc -1)
    {
        
    }
    


}