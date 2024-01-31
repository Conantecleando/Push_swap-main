/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:28:27 by daroldan          #+#    #+#             */
/*   Updated: 2024/01/31 23:18:21 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stbool.h>

typedef struct stack
{
	int				index;
	long			target;
	long			value;
	bool			min;
	bool			max;
	struct stack	*next;
	struct stack	*prev;	
}	t_stack;

t_stack	*new_stack(long value);
void	swap_stack(t_stack **stack);
void	clear_stack(t_stack **stack);
void	erase_stack(void *t_stack);
void	rotate_stack(t_stack **stack);
void	reverse_rotate_stack(t_stack **stack);
void	plus_index_list(t_stack **stack);
void	minus_index_list(t_stack **stack);
void	free_stack(t_stack **stack);
t_stack	*trans_list(int argc, char **argv);
#endif