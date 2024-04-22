/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:28:27 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/22 02:52:33 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../LIBFT/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	int				index;
	long			value;
	int				cost;
	int				target;
	int				costarget;
	int				pos;
	struct s_stack	*next;
}	t_stack;

t_stack		*new_stack(long value);
void		insert_end_list(t_stack **head, long value);
void		swap_stack(t_stack **stack);
void		clear_stack(t_stack **stack);
void		erase_stack(t_stack **t_stack);
void		rotate_stack(t_stack **stack, char c);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		push(t_stack **stack_a, t_stack **stack_b, char c);
void		reverse_rotate_stack(t_stack **stack, char c);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		get_index(t_stack *stack, int size);
void		get_position(t_stack *stack);
void		plus_index_list(t_stack **stack);
void		minus_index_list(t_stack **stack);
void		free_stack(t_stack **stack);
long		find_max_value(t_stack *stack);
t_stack		*find_min_value(t_stack *stack);
int			find_average_value(t_stack *stack);
int			stack_len(t_stack *stack);
void		trans_list(int argc, char **argv, t_stack **stack_a);
void		sort(t_stack **stack_a, t_stack **stack_b);
void		sort_three(t_stack **stack_a);
bool		list_ok(t_stack *stack);
void		sort(t_stack **stack_a, t_stack **stack_b);
void		moves_stacks(t_stack *stack_a, t_stack *stack_b);
void		cost_push(t_stack **stacka, t_stack **stackb);
int			get_target(t_stack **stacka, int index_b, int target_i, int target);
void		moves(t_stack *stack_a, t_stack *stack_b);
void		better_moves (t_stack **stack, t_stack **stack_b);
void		target(t_stack **stacka, t_stack **stackb);
bool		type_error(char **list);
void		list_to_stack(char **list, t_stack **stack_a);
bool		double_number_error(t_stack *stack_a);
void		printList(t_stack *head);
int			absolute(int nbr);
int			search_move(t_stack *stack_b);
#endif
