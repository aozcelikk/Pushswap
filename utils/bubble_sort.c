/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:37:29 by aozcelik          #+#    #+#             */
/*   Updated: 2022/07/01 11:37:30 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_max_bit(t_stack *stack)
{
	int	i;
	int	pow;

	i = 0;
	pow = 0;
	while (i < 32)
	{
		if ((stack->c_len - 1) & (1 << i))
			pow = i;
		i++;
	}
	stack->max_bit = pow + 1;
}

int	find_index(t_stack *stack, int number)
{
	int	i;

	i = 0;
	while (i < stack->c_len)
	{
		if (stack->c[i] == number)
			return (i);
		i++;
	}
	return (0);
}

void	value_to_index(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->a_len)
	{
		stack->a[i] = find_index(stack, stack->a[i]);
		i++;
	}
}

void	int_array_copy(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->c_len)
	{
		stack->c[i] = stack->a[i];
		i++;
	}
}

void	bubble_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;

	stack->c_len = stack->a_len;
	stack->c = (int *)malloc(sizeof(int *) * stack->c_len);
	if (!stack)
		quit(stack, 1);
	int_array_copy(stack);
	i = 0;
	while (i < stack->c_len)
	{
		j = 0;
		while (j < stack->c_len - 1)
		{
			if (stack->c[j] > stack->c[j + 1])
			{
				tmp = stack->c[j];
				stack->c[j] = stack->c[j + 1];
				stack->c[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
