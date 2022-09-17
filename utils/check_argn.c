/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:37:40 by aozcelik          #+#    #+#             */
/*   Updated: 2022/07/01 11:37:42 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_arg(char **v)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (!v || !*v)
		return (0);
	while (v[i])
	{
		j = 0;
		while (v[i][j])
		{
			if (j == 0 && (v[i][j] == '-' || v[i][j] == '+'))
				j++;
			if ((v[i][j] < '0' || v[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_repeat(t_stack *var)
{
	int	i;
	int	i2;

	i = 0;
	while (i < var->a_len)
	{
		i2 = i + 1;
		while (i2 < var->a_len)
		{
			if (var->a[i] == var->a[i2])
				return (0);
			else
				i2++;
		}
		i++;
	}
	return (1);
}

int	check_space(char **v)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (v[i])
	{
		j = 0;
		while (v[i][j] == ' ')
			j++;
		if (!v[i][j])
			return (0);
		i++;
	}
	return (1);
}

int	check_param_empty(char **v)
{
	int	i;

	i = 1;
	while (v[i])
	{
		if (!v[i][0])
			return (0);
		i++;
	}
	return (1);
}

int	check_line(t_stack *var)
{
	int	i;

	i = 0;
	while (i < var->a_len - 1)
	{
		if ((var->a[i] < var->a[i + 1]))
			i++;
		else
			return (1);
	}
	return (5);
}
