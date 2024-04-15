/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:28:27 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/15 11:17:14 by ribana-b         ###   ########.com      */
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

typedef struct s_stack
{
	int				index;
	int				target;
	long			value;
	int				cost;
	struct s_stack	*next;
}	t_stack;

typedef struct info_a
{
	t_stack			*stack_a;
	unsigned int	len_a;
	int				max_a;
	struct order	*next;		
}	t_index_a;

typedef struct info_b
{
	t_stack			*stack_b;
	unsigned int	len_b;
	int				max_b;
	struct order	*next;		
}	t_index_b;

t_stack	*new_stack(long value);
void	insert_end_list(t_stack **head, long value);
void	swap_stack(t_stack **stack);
void	clear_stack(t_stack **stack);
void	erase_stack(t_stack **t_stack);
void	rotate_stack(t_stack **stack);
void	push(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_stack(t_stack **stack);
void	new_index(t_stack **stack);
void	plus_index_list(t_stack **stack);
void	minus_index_list(t_stack **stack);
void	free_stack(t_stack **stack);
long	find_max_value(t_stack **stack);
int		stack_len(t_stack *stack);
void	trans_list(int argc, char **argv, t_stack **stack_a);
void	sort(t_stack **stack_a, t_stack **stack_b);
bool	list_ok(t_stack *stack);
void	sort(t_stack **stack_a, t_stack **stack_b);
void	target(t_stack **stack_a, t_stack **stack_b);
bool	type_error(char **list);
void	list_to_stack(char **list, t_stack **stack_a);
bool	double_number_error(char **list);
#endif
