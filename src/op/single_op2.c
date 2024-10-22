/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_op2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 08:58:20 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 11:59:08 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file single_op2.c
 * @brief Single Operations 2
*/

#include "push_swap.h"

/**
 * @brief Shifts all elements of stack a from bottom to top
 * @param a Stack A
 * @param print_inst Print Instruction?
*/
void	ra(t_stack *a, bool print_inst)
{
	int	tmp;
	int	i;

	if (is_empty(a))
		return ;
	tmp = a->storage[a->top];
	i = a->top;
	while (i > 0)
	{
		a->storage[i] = a->storage[i - 1];
		i--;
	}
	a->storage[BOTTOM] = tmp;
	if (print_inst)
		ft_putstr_fd("ra\n", STDOUT_FILENO);
}

/**
 * @brief Shifts all elements of stack b from bottom to top
 * @param b Stack A
 * @param print_inst Print Instruction?
*/
void	rb(t_stack *b, bool print_inst)
{
	int	tmp;
	int	i;

	if (is_empty(b))
		return ;
	tmp = b->storage[b->top];
	i = b->top;
	while (i > 0)
	{
		b->storage[i] = b->storage[i - 1];
		i--;
	}
	b->storage[BOTTOM] = tmp;
	if (print_inst)
		ft_putstr_fd("rb\n", STDOUT_FILENO);
}

/**
 * @brief Shifts all elements of stack a from top to bottom
 * @param a Stack A
 * @param print_inst Print Instruction?
*/
void	rra(t_stack *a, bool print_inst)
{
	int	tmp;
	int	i;

	if (is_empty(a))
		return ;
	tmp = a->storage[BOTTOM];
	i = 0;
	while (i < a->top)
	{
		a->storage[i] = a->storage[i + 1];
		i++;
	}
	a->storage[a->top] = tmp;
	if (print_inst)
		ft_putstr_fd("rra\n", STDOUT_FILENO);
}

/**
 * @brief Shifts all elements of stack b from top to bottom
 * @param b Stack B
 * @param print_inst Print Instruction?
*/
void	rrb(t_stack *b, bool print_inst)
{
	int	tmp;
	int	i;

	if (is_empty(b))
		return ;
	tmp = b->storage[BOTTOM];
	i = 0;
	while (i < b->top)
	{
		b->storage[i] = b->storage[i + 1];
		i++;
	}
	b->storage[b->top] = tmp;
	if (print_inst)
		ft_putstr_fd("rra\n", STDOUT_FILENO);
}

/**@} */