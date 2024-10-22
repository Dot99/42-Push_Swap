/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 08:50:08 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 11:57:10 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file double_op.c
 * @brief Double Operations
*/

#include "push_swap.h"

/**
 * @brief Both sa and sb
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	ss(t_stack *a, t_stack *b)
{
	sa(a, true);
	sb(b, true);
	ft_putstr_fd("ss\n", STDOUT_FILENO);
}

/**
 * @brief Both ra and rb
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	rr(t_stack *a, t_stack *b)
{
	ra(a, true);
	rb(b, true);
	ft_putstr_fd("rr\n", STDOUT_FILENO);
}

/**
 * @brief Both rra and rrb
 * 
 * @param a 
 * @param b 
*/
void	rrr(t_stack *a, t_stack *b)
{
	rra(a, true);
	rrb(b, true);
	ft_putstr_fd("rrr\n", STDOUT_FILENO);
}

/**@} */