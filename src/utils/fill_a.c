/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:14:29 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/22 09:34:27 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file fill_a.c
 * @brief Fill the stack A
*/

#include "push_swap.h"

/**
 * @brief Fill the stack A
 * 
 * @param a Stack A
 * @param int_arr Array of Ints
 * @param argc Number of arguments
*/
void	fill_a(t_stack *a, int *int_arr, int argc)
{
	int	i;

	i = (argc - 1);
	while (i >= 0)
	{
		push(a, int_arr[i]);
		i--;
	}
	free(int_arr);
}

/**@} */