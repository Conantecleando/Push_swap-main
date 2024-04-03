/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:28:27 by daroldan          #+#    #+#             */
/*   Updated: 2024/03/31 01:37:44 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648


typedef struct t_stack
{
	int				index;
	int				target;
	long			value;
	int				cost;
	struct stack	*next;
}	t_stack;

typedef struct info_a
{
	t_stack			*stack
	sizeof			len_a;
	int				max_a;
	struct order	*next;		
}t_index;

typedef struct info_b
{
	t_stack			*stack
	sizeof			len_b;
	int				max_b;
	struct order	*next;		
}t_index;

t_stack	*new_stack(long value);
void	insert_end_list(t_stack **head, long value);
void	swap_stack(t_stack **stack);
void	clear_stack(t_stack **stack);
void	erase_stack(void *t_stack);
void	rotate_stack(t_stack **stack);
void	push(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_stack(t_stack **stack);
void	new_index(t_stack **stack);
void	plus_index_list(t_stack **stack);
void	minus_index_list(t_stack **stack);
void	free_stack(t_stack **stack);
long	find_max_value(t_stack **stack);
int		stack_len(t_stack **stack);
void	trans_list(int argc, char **argv, t_stack **stack a);
void	sort(t_stack **stack_a, t_stack **stack_b);
bool	list_ok(t_stack *stack);
void	sort(t_stack **stack_a, t_stack **stack_b);
void	target(t_stack **stack_a, t_stack **stack_b);
bool	type_error(char **list);
void	list_to_stack(char **list, t_stack **stack_a);
bool	double_number_error(char **list);




#endif