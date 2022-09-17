/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:39:10 by aozcelik          #+#    #+#             */
/*   Updated: 2022/07/01 11:39:11 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	multi(t_stack *stack)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	while (i < stack->max_bit)
	{
		j = 0;
		z = 0;
		while (j < stack->c_len)
		{
			if ((stack->a[0] >> i) & 1)
				ra(stack);
			else
			{
				pb(stack);
				z++;
			}
			j++;
		}
		while (z--)
			pa(stack);
		i++;
	}
}

long long	ft_atoi(char *str, t_stack *var)
{
	int			i;
	long long	r;
	long long	k;

	i = 0;
	r = 0;
	k = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			quit(var, 1);
		if (str[i] == '-')
			k *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + ((long long)str[i] - 48);
		i++;
	}
	return (r * k);
}
