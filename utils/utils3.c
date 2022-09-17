/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozcelik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:39:01 by aozcelik          #+#    #+#             */
/*   Updated: 2022/07/01 11:39:02 by aozcelik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num > lst[i])
			num = lst[i];
	return (get_index(lst, len, num));
}

int	get_max(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num < lst[i])
			num = lst[i];
	return (get_index(lst, len, num));
}

int	average(int *lst, int len)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (i < len)
	{
		ret += lst[i];
		i++;
	}
	return (ret / len);
}

int	pivot_under(int *lst, int len, int pivot)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (lst[i++] < pivot)
			return (1);
	}
	return (0);
}

int	get_index(int *lst, int len, int num)
{
	int	i;

	i = 0;
	while (i < len)
		if (lst[i++] == num)
			return (i - 1);
	return (-1);
}
