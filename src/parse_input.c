/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:38:44 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/22 09:34:56 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file parse_input.c
 * @brief Parse the input
*/

#include "../includes/push_swap.h"

/**
 * @brief Checks for duplicates in the array
 * 
 * @param storage Array of ints
 * @param arr_len Size of the array
 * @return true Has duplicates
 * @return false Doesn't have duplicates
*/
static bool	has_duplicates(int *storage, int arr_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_len)
	{
		j = i + 1;
		while (j <= arr_len)
		{
			if (storage[i] == storage[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

/**
 * @brief Convert numbers to int
 * 
 * @param a Stack A
 * @param argc Number of arguments
 * @param argv Array of arguments from the program
 * @return int* Array of ints
*/
static int	*conv_a_to_i(t_stack *a, int argc, char **argv)
{
	int		*int_list;
	int		i;
	int		j;
	ssize_t	nr;

	int_list = malloc((argc) * sizeof(int));
	i = 0;
	j = 0;
	while (argv[j])
	{
		nr = ft_atol(argv[j]);
		if (nr > INT_MAX || nr <= INT_MIN)
		{
			free(int_list);
			dead(a, NULL);
		}
		int_list[i] = (int)nr;
		i++;
		j++;
	}
	return (int_list);
}

/**
 * @brief Checks if the arguments are all digits
 * 
 * @param argv Arguments of the program
 * @return true All digits
 * @return false Not all digits
*/
static bool	is_alldigits(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((!ft_isdigit(argv[i][j]) && argv[i][j] != '-') ||
				(argv[i][j] == '-' && !ft_isdigit(argv[i][j + 1])))
				return (false);
			j += 1;
		}
		i += 1;
	}
	return (true);
}

/**
 * @brief Main function of parsing 
 * @param argc Number of arguments
 * @param argv Array of the arguments
 * @param a Stack A
 * @return int* Array of ints
*/
int	*parse_input(int argc, char **argv, t_stack *a)
{
	int	*storage;

	if (!is_alldigits(argv))
		dead(a, NULL);
	storage = conv_a_to_i(a, argc, argv);
	if (has_duplicates(storage, argc - 1))
	{
		free(storage);
		dead(a, NULL);
	}
	return (storage);
}

/**@} */