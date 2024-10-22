/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 08:45:53 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 12:34:07 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file push_swap.h
 * @brief Push Swap Header
*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <fcntl.h>
# include "../libft/libft.h"

/**
 * @brief Struct of the Stacks
 * @param stack_size Size of the stack
 * @param storage Array of the numbers
 * @param top Value on the top
*/
typedef struct s_stack
{
	int	stack_size;
	int	*storage;
	int	top;
}				t_stack;

# define BOTTOM 0

static inline t_stack	init_stack(int arr_len)
{
	return ((t_stack){
		.stack_size = arr_len,
		.storage = malloc(arr_len * sizeof(int)),
		.top = -1
	});
}

// ------------------------INSTRUCTIONS --------------------------------------
// ----------------------------SWAP ------------------------------------------

void	sa(t_stack *a, bool print_instruction);
void	sb(t_stack *b, bool print_instruction);
void	ss(t_stack *a, t_stack *b);

void	pa(t_stack *a, t_stack *b, bool print_instruction);
void	pb(t_stack *a, t_stack *b, bool print_instruction);

void	ra(t_stack *a, bool print_instruction);
void	rb(t_stack *b, bool print_instruction);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a, bool print_instruction);
void	rrb(t_stack *b, bool print_instruction);
void	rrr(t_stack *a, t_stack *b);

int		*parse_input(int argc, char **argv, t_stack *a);

void	fill_a(t_stack *a, int *int_arr, int argc);
bool	is_empty(t_stack *stack);
bool	is_full(t_stack *stack);
bool	is_sorted(t_stack *stack);
int		max(t_stack *stack);
int		min(t_stack *stack);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);

void	free_stacks(t_stack *a, t_stack *b);
void	free_argv(char **argv);

void	dead(t_stack *a, t_stack *b);

char	**handle_argv(char **argv, int argc);
int		func_num_elem(char **argv);

void	specific(t_stack *a, t_stack *b);
void	insertion_sort(int *storage, int chunk_size);
void	radix_sort(t_stack *a, t_stack *b);
#endif

/**@} */