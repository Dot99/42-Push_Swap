/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:45:54 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 12:01:42 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file is_sorted.c
 * @brief Check if stack a is sorted
*/

#include "push_swap.h"

/**
 * @brief Checks if stack a is sorted
 * 
 * @param a Stack A
 * @return true Is Sorted
 * @return false Not sorted
*/
bool	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->top)
	{
		if (a->storage[i] < a->storage[i + 1])
			return (false);
		i++;
	}
	return (true);
}

/**@} */