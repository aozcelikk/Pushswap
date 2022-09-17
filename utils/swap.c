/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <aozcelik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:21:38 by aozcelik          #+#    #+#             */
/*   Updated: 2022/06/09 19:13:10 by aozcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *lst, int len)
{
	int	temp;

	if (len >= 2)
	{
		temp = lst[1];
		lst[1] = lst[0];
		lst[0] = temp;
	}
}

void	sa(t_stack *stack)
{
	if (stack->a_len >= 2)
	{
		swap(stack->a, stack->a_len);
		ft_printf("sa\n");
	}
}

void	sb(t_stack *stack)
{
	if (stack->b_len >= 2)
	{
		swap(stack->b, stack->b_len);
		ft_printf("sb\n");
	}
}

void	ss(t_stack *stack)
{
	swap(stack->b, stack->b_len);
	swap(stack->a, stack->a_len);
	ft_printf("ss\n");
}
