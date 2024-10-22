/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 09:18:07 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 12:07:39 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file args_utils.c
 * @brief Arguments Utils function
*/

#include "push_swap.h"

/**
 * @brief Handles the new arguments
 * 
 * @param argv Arguments of program
 * @param argc Number of arguments
 * @return char** New arguments
*/
char	**handle_argv(char **argv, int argc)
{
	char	**new_argv;

	new_argv = argv + 1;
	if (argc == 2)
	{
		new_argv = ft_split(argv[1], ' ');
		if (!new_argv)
			dead(NULL, NULL);
	}
	return (new_argv);
}

/**
 * @brief Counts the number of arguments
 * 
 * @param argv Arguments of the program
 * @return int Number of arguments
*/
int	func_num_elem(char **argv)
{
	int	num_elem;

	num_elem = 0;
	while (argv[num_elem] != NULL)
		num_elem++;
	return (num_elem);
}

/**@} */