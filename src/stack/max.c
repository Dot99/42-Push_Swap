/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:47:03 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 12:02:21 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file max.c
 * @brief 
*/

#include "push_swap.h"

/**
 * @brief Get the max value of the stack
 * 
 * @param stack Stack
 * @return int Max value;
*/
int	max(t_stack *stack)
{
	int	max;
	int	i;

	max = stack->storage[BOTTOM];
	i = BOTTOM;
	while (i < stack->top)
	{
		if (stack->storage[i] > max)
			max = stack->storage[i];
		i += 1;
	}
	return (max);
}

/**@} */