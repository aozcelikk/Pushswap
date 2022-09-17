/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:38:50 by aozcelik          #+#    #+#             */
/*   Updated: 2022/07/01 11:38:51 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	triple(t_stack *stack)
{
	if ((stack->a[1] > stack->a[0]) && (stack->a[1] > stack->a[2]) \
		&& (stack->a[0] < stack->a[2]))
	{
		sa(stack);
		ra(stack);
	}
	else if ((stack->a[1] > stack->a[0]) && (stack->a[1] > stack->a[2]) \
		&& (stack->a[0] > stack->a[2]))
		rra(stack);
	else if ((stack->a[1] < stack->a[0]) && (stack->a[1] < stack->a[2]) \
		&& (stack->a[0] < stack->a[2]))
		sa(stack);
	else if ((stack->a[1] < stack->a[0]) && (stack->a[1] > stack->a[2]) \
		&& (stack->a[0] > stack->a[2]))
	{
		sa(stack);
		rra(stack);
	}
	else
		ra(stack);
	if (stack->b[0] < stack->b[1])
		sb(stack);
}

void	tripler(t_stack *stack)
{
	if ((stack->b[1] > stack->b[0]) && (stack->b[1] > stack->b[2]) \
		&& (stack->b[0] < stack->b[2]))
		rb(stack);
	else if ((stack->b[1] > stack->b[0]) && (stack->b[1] > stack->b[2]) \
		&& (stack->b[0] > stack->b[2]))
		sb(stack);
	else if ((stack->b[1] < stack->b[0]) && (stack->b[1] < stack->b[2]) \
		&& (stack->b[0] < stack->b[2]))
		rrb(stack);
	else if ((stack->b[1] < stack->b[0]) && (stack->b[1] < stack->b[2]) \
		&& (stack->b[0] > stack->b[2]))
	{
		sb(stack);
		rb(stack);
	}
	else if ((stack->b[1] > stack->b[0]) && (stack->b[1] < stack->b[2]) \
		&& (stack->b[0] < stack->b[2]))
	{
		sb(stack);
		rrb(stack);
	}
	if (stack->a[0] > stack->a[1])
		sa(stack);
}

void	twor(t_stack *stack)
{
	if (stack->b[0] < stack->b[1])
		rb(stack);
	if (stack->a[0] > stack->a[1])
		ra(stack);
}

void	the_four(t_stack *stack)
{
	int	pivot;
	int	i;

	i = stack->a_len;
	pivot = average(stack->a, stack->a_len);
	while (i--)
	{
		if (stack->a[0] <= pivot)
			pb(stack);
		else
			ra(stack);
	}
	if (stack->a_len == 3 && stack->b_len > 0)
		triple(stack);
	else if (stack->b_len == 3 && stack->a_len > 0)
		tripler(stack);
	else if (stack->a_len == 2)
		twor(stack);
	i = stack->b_len;
	while (i--)
		pa(stack);
}

void	the_five(t_stack *stack)
{
	int	pivot;
	int	i;

	i = stack->a_len;
	pivot = average(stack->a, stack->a_len);
	while (i--)
	{
		if (stack->a[0] <= pivot)
			pb(stack);
		else if (stack->a[0] < stack->a[1] \
			&& stack->a[1] < stack->a[2])
			break ;
		else
			ra(stack);
	}
	if (stack->a_len == 3 && stack->b_len == 2)
		triple(stack);
	else
		tripler(stack);
	while (stack->b_len)
		pa(stack);
}
