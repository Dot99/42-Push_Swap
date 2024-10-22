/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dead.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:14:43 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/22 09:34:18 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file dead.c
 * @brief Function to exit the program in case of error
*/

#include "push_swap.h"

/**
 * @brief Function to exit the program in case of error
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	dead(t_stack *a, t_stack *b)
{
	ft_putendl_fd("Error", STDERR_FILENO);
	if (a)
		free(a->storage);
	if (b)
		free(b->storage);
	exit(EXIT_FAILURE);
}

/**@} */