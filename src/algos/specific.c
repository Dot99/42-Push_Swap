/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specific.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:53:40 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/21 11:46:28 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file specific.c
 * @brief Specific sorting
*/
#include "push_swap.h"

/**
 * @brief Sort 2 elements
 * 
 * @param a Stack A
*/
void	sort_2(t_stack *a)
{
	if (a->storage[a->top] > a->storage[a->top -1])
		ra(a, true);
}

/**
 * @brief Sort 3 elements
 * 
 * @param a Stack A
*/
void	sort_3(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->storage[a->top];
	mid = a->storage[a->top -1];
	bot = a->storage[a->top -2];
	if (top > mid && mid > bot)
	{
		sa(a, true);
		rra(a, true);
	}
	else if (top > bot && bot > mid)
		ra(a, true);
	else if (mid > top && top > bot)
		rra(a, true);
	else if (mid > bot && bot > top)
	{
		sa(a, true);
		ra(a, true);
	}
	else if (bot > top && top > mid)
		sa(a, true);
}

/**
 * @brief Sort 4 elements
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	sort_4(t_stack *a, t_stack *b)
{
	int	min_value;

	min_value = min(a);
	while (a->storage[a->top] != min_value)
		ra(a, true);
	if (!is_sorted(a))
	{
		pb(a, b, true);
		sort_3(a);
		pa(a, b, true);
	}
}

/**
 * @brief Sort 5 elements
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	sort_5(t_stack *a, t_stack *b)
{
	int	min_value;

	min_value = min(a);
	while (a->storage[a->top] != min_value)
		ra(a, true);
	pb(a, b, true);
	sort_4(a, b);
	pa(a, b, true);
}

/**
 * @brief Checks stack size and follows up to specific function
 * 
 * @param a Stack A
 * @param b Stack B
*/
void	specific(t_stack *a, t_stack *b)
{
	if (a->stack_size == 2)
		sort_2(a);
	else if (a->stack_size == 3)
		sort_3(a);
	else if (a->stack_size == 4)
		sort_4(a, b);
	else
		sort_5(a, b);
}
