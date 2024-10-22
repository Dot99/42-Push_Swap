/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 08:40:07 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 11:52:47 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file single_op.c
 * @brief Single Operations
*/

#include "push_swap.h"

/**
 * @brief Swap the 2 top elements of stack a
 * @param a Stack A
 * @param print_inst Print Instruction?
*/
void	sa(t_stack *a, bool print_inst)
{
	int	tmp;

	if (is_empty(a) || a->top == 0)
		return ;
	tmp = a->storage[a->top - 1];
	a->storage[a->top - 1] = a->storage[a->top];
	a->storage[a->top] = tmp;
	if (print_inst)
		ft_putstr_fd("sa\n", STDOUT_FILENO);
}

/**
 * @brief Swap the 2 top elements of stack b
 * @param b Stack B
 * @param print_inst Print Instruction?
*/
void	sb(t_stack *b, bool print_inst)
{
	int	tmp;

	tmp = b->storage[b->top - 1];
	b->storage[b->top - 1] = b->storage[b->top];
	b->storage[b->top] = tmp;
	if (print_inst)
		ft_putstr_fd("sb\n", STDOUT_FILENO);
}

/**
 * @brief Moves the top element of stack b at the top of stack a
 * 
 * @param a Stack A
 * @param b Stack B
 * @param print_inst Print Instruction?
*/
void	pa(t_stack *a, t_stack *b, bool print_inst)
{
	if (is_empty(b))
		return ;
	push(a, pop(b));
	if (print_inst)
		ft_putstr_fd("pa\n", STDOUT_FILENO);
}

/**
 * @brief Moves the top element of stack a at the top of stack b
 * @param a Stack A
 * @param b Stack B
 * @param print_inst Print Instruction?
*/
void	pb(t_stack *a, t_stack *b, bool print_inst)
{
	if (is_empty(a))
		return ;
	push(b, pop(a));
	if (print_inst)
		ft_putstr_fd("pb\n", STDOUT_FILENO);
}

/**@} */