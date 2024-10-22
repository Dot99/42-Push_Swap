/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:59:23 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 11:44:11 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file radix_sort.c
 * @brief Radix Sort Algorithm
*/

#include "push_swap.h"

/**
 * @brief Pre Sorting for indexing
 * 
 * @param stack Struct of stack
 * @return int* 
*/
static int	*sort_arr(t_stack *stack)
{
	int	*sorted_arr;
	int	i;

	sorted_arr = malloc(stack->stack_size * sizeof(int));
	i = 0;
	while (i < stack->stack_size)
	{
		sorted_arr[i] = stack->storage[i];
		i += 1;
	}
	insertion_sort(sorted_arr, stack->stack_size);
	return (sorted_arr);
}

/**
 * @brief Indexing the stack
 * 
 * @param stack Struct of stack
 * @param sorted_arr Sorted array
*/
static void	index(t_stack *stack, int *sorted_arr)
{
	int	i;
	int	*temp;
	int	j;

	i = -1;
	temp = malloc(stack->stack_size * sizeof(int));
	while (++i < stack->stack_size)
	{
		j = -1;
		while (++j < stack->stack_size)
		{
			if (sorted_arr[i] == stack->storage[j])
				temp[j] = i;
		}
	}
	i = -1;
	while (++i < stack->stack_size)
		stack->storage[i] = temp[i];
	free(temp);
	free(sorted_arr);
}

/**
 * @brief Radix Sort
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	value;
	int	i;
	int	j;

	index(a, sort_arr(a));
	max_bits = 0;
	value = max(a);
	while (value >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits && !is_sorted(a))
	{
		j = -1;
		while (++j < a->stack_size && !is_sorted(a))
		{
			value = a->storage[a->top];
			if (((value >> i) & 1) == 1)
				ra(a, true);
			else
				pb(a, b, true);
		}
		while (!is_empty(b))
			pa(a, b, true);
	}
}

/**@} */