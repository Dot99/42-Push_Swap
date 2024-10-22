/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:19:25 by gude-jes          #+#    #+#             */
/*   Updated: 2024/10/22 09:34:42 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @defgroup mandatory Mandatory
 * @{
 * @file stack_utils.c
 * @brief Stack utilities
*/

#include "push_swap.h"

/**
 * @brief Checks if stack is empty
 * 
 * @param stack Stack to check
 * @return true Is empty
 * @return false Not empty
*/
bool	is_empty(t_stack *stack)
{
	if (stack->top == -1)
		return (true);
	else
		return (false);
}

/**
 * @brief Checks if stack is full
 * 
 * @param stack Stack to check
 * @return true Is full
 * @return false Is not full
*/
bool	is_full(t_stack *stack)
{
	if (stack->top == (stack->stack_size - 1))
		return (true);
	else
		return (false);
}

/**
 * @brief Push a value into a stack
 * @param stack Stack to receive the value
 * @param value Value to push
*/
void	push(t_stack *stack, int value)
{
	if (!is_full(stack))
	{
		stack->top += 1;
		stack->storage[stack->top] = value;
	}
}

/**
 * @brief Removes a value from the top of the stack
 * 
 * @param stack Stack to remove value
 * @return int Value removed
*/
int	pop(t_stack *stack)
{
	int	retrieved_value;

	retrieved_value = stack->storage[stack->top];
	stack->top -= 1;
	return (retrieved_value);
}

/**@} */