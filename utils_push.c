/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/02/14 23:22:55 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **trans_list(int argc, char **argv[])
{
    int       i;
    char **list;

    if (argc == 1)
        exit(0);
    i = 0;
    while (i < argc -1)
    {
        if (*argv[i] == 34)
            list = ft_split(*argv[], " ");
            break;
        else
            list[i] = *argv[i];
        i++;
    }
    type_error(list);
    double_number_error(list);
}

long ft_atol(char *n)
{
    int  i;
    long l;

    l = 0;
    while (*n == ' ' || *n == '\t' || *n == '\n' || \
			*n == '\r' || *n == '\f' || *n == '\v')
		n++;
    if(n == '-' || n == '+')
    {
        if(n == '-')
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
