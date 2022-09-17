/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <aozcelik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:21:38 by aozcelik          #+#    #+#             */
/*   Updated: 2022/06/09 19:13:10 by aozcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(int *lst, int len)
{
	int	i;
	int	temp;

	if (len < 1)
		return ;
	i = 1;
	while (i < len)
	{
		temp = lst[i];
		lst[i] = lst[i - 1];
		lst[i - 1] = temp;
		i++;
	}
}

void	ra(t_stack *stack)
{
	ft_printf("ra\n");
	rotate(stack->a, stack->a_len);
}

void	rb(t_stack *stack)
{
	ft_printf("rb\n");
	rotate(stack->b, stack->b_len);
}

void	rr(t_stack *stack)
{
	ft_printf("rr\n");
	rotate(stack->a, stack->a_len);
	rotate(stack->b, stack->b_len);
}
