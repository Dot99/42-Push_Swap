/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:50:54 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 12:00:55 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file frees.c
 * @brief Functions to free
*/

#include "push_swap.h"

/**
 * @brief Free both stacks
 * @param a Stack A
 * @param b Stack B
*/
void	free_stacks(t_stack *a, t_stack *b)
{
	free (a->storage);
	free (b->storage);
}

/**
 * @brief Free args
 * @param argv Arguments
*/
void	free_argv(char **argv)
{
	int	i;

	i = 0;
	if (!argv)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

/**@} */