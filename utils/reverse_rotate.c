/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <aozcelik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:21:38 by aozcelik          #+#    #+#             */
/*   Updated: 2022/06/09 19:13:10 by aozcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(int *lst, int len)
{
	int	i;
	int	temp;

	if (len < 1)
		return ;
	i = len - 1;
	while (i > 0)
	{
		temp = lst[i];
		lst[i] = lst[i - 1];
		lst[i - 1] = temp;
		i--;
	}
}

void	rra(t_stack *stack)
{
	ft_printf("rra\n");
	reverse_rotate(stack->a, stack->a_len);
}

void	rrb(t_stack *stack)
{
	ft_printf("rrb\n");
	reverse_rotate(stack->b, stack->b_len);
}

void	rrr(t_stack *stack)
{
	ft_printf("rrr\n");
	reverse_rotate(stack->b, stack->b_len);
	reverse_rotate(stack->a, stack->a_len);
}
