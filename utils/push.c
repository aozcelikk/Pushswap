/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <aozcelik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:21:38 by aozcelik          #+#    #+#             */
/*   Updated: 2022/06/09 19:13:10 by aozcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	if (stack->b_len > 0)
	{
		stack->a_len++;
		i = stack->a_len;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = stack->b[0];
		stack->b_len--;
		i = 0;
		while (i < stack->b_len)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->a[stack->a_len] = 0;
		stack->b[stack->b_len] = 0;
		ft_printf("pa\n");
	}
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->a_len > 0)
	{
		stack->b_len++;
		i = stack->b_len;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = stack->a[0];
		stack->a_len--;
		i = 0;
		while (i < stack->a_len)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		ft_printf("pb\n");
		stack->a[stack->a_len] = 0;
		stack->b[stack->b_len] = 0;
	}
}
