/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:30:17 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/22 09:33:43 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file main.c
 * @brief Main file of the program
*/

#include "push_swap.h"

/**
 * @brief Main function of the program
 * 
 * @param argc Number of arguments
 * @param argv Array of arguments
 * @return int Default Exits
*/
int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		num_elem;
	char	**new_argv;

	if (argc < 2)
		return (EXIT_SUCCESS);
	new_argv = handle_argv(argv, argc);
	num_elem = func_num_elem(new_argv);
	a = init_stack(num_elem);
	fill_a(&a, parse_input(num_elem, new_argv, &a), num_elem);
	b = init_stack(num_elem);
	if (!is_sorted(&a))
	{
		if (a.stack_size <= 5)
			specific(&a, &b);
		else
			radix_sort(&a, &b);
	}
	if (argc == 2)
		free_argv(new_argv);
	free_stacks(&a, &b);
	return (EXIT_SUCCESS);
}

/**@} */