/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:38:48 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 12:03:23 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file min.c
 * @brief Get the minimum value of stack
*/

#include "push_swap.h"

/**
 * @brief Get the minimum value of stack
 * 
 * @param stack Stack
 * @return int Minimum value
*/
int	min(t_stack *stack)
{
	int	min;
	int	i;

	i = stack->top;
	min = stack->storage[stack->top];
	while (i >= 0)
	{
		if (stack->storage[i] < min)
			min = stack->storage[i];
		i--;
	}
	return (min);
}

/**@} */